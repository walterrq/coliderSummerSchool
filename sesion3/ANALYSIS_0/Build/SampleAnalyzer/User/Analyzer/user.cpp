#include "SampleAnalyzer/User/Analyzer/user.h"
using namespace MA5;

MAbool user::Initialize(const MA5::Configuration& cfg,
                      const std::map<std::string,std::string>& parameters)
{
  // Initializing PhysicsService for MC
  PHYSICS->mcConfig().Reset();

  // definition of the multiparticle "hadronic"
  PHYSICS->mcConfig().AddHadronicId(-5);
  PHYSICS->mcConfig().AddHadronicId(-4);
  PHYSICS->mcConfig().AddHadronicId(-3);
  PHYSICS->mcConfig().AddHadronicId(-2);
  PHYSICS->mcConfig().AddHadronicId(-1);
  PHYSICS->mcConfig().AddHadronicId(1);
  PHYSICS->mcConfig().AddHadronicId(2);
  PHYSICS->mcConfig().AddHadronicId(3);
  PHYSICS->mcConfig().AddHadronicId(4);
  PHYSICS->mcConfig().AddHadronicId(5);
  PHYSICS->mcConfig().AddHadronicId(21);

  // definition of the multiparticle "invisible"
  PHYSICS->mcConfig().AddInvisibleId(-16);
  PHYSICS->mcConfig().AddInvisibleId(-14);
  PHYSICS->mcConfig().AddInvisibleId(-12);
  PHYSICS->mcConfig().AddInvisibleId(12);
  PHYSICS->mcConfig().AddInvisibleId(14);
  PHYSICS->mcConfig().AddInvisibleId(16);
  PHYSICS->mcConfig().AddInvisibleId(1000022);

  // ===== Signal region ===== //
  Manager()->AddRegionSelection("myregion");

  // ===== Selections ===== //
  Manager()->AddCut("1_PT ( a[1] ) < 40.0");
  Manager()->AddCut("2_PT ( a[2] ) < 30.0");
  Manager()->AddCut("3_M ( a[1] a[2] ) < 120.0");
  Manager()->AddCut("4_M ( a[1] a[2] ) > 130.0");

  // ===== Histograms ===== //
  Manager()->AddHisto("1_M", 50,100.0,200.0);
  Manager()->AddHisto("2_M", 100,100.0,200.0);
  Manager()->AddHisto("3_M", 200,100.0,200.0);
  Manager()->AddHisto("4_M", 100,100.0,200.0);
  Manager()->AddHisto("5_M", 200,100.0,200.0);
  Manager()->AddHisto("6_M", 100,105.0,160.0);
  Manager()->AddHisto("7_M", 200,105.0,160.0);
  Manager()->AddHisto("8_M", 100,105.0,160.0);
  Manager()->AddHisto("9_M", 100,105.0,160.0);
  Manager()->AddHisto("10_M", 200,105.0,160.0);
  Manager()->AddHisto("11_M", 100,105.0,160.0);
  Manager()->AddHisto("12_M", 200,105.0,160.0);
  Manager()->AddHisto("13_M", 100,115.0,135.0);
  Manager()->AddHisto("14_M", 200,115.0,135.0);
  Manager()->AddHisto("15_M", 100,115.0,135.0);

  // No problem during initialization
  return true;
}

MAbool user::Execute(SampleFormat& sample, const EventFormat& event)
{
  MAfloat32 __event_weight__ = 1.0;
  if (weighted_events_ && event.mc()!=0) __event_weight__ = event.mc()->weight();

  if (sample.mc()!=0) sample.mc()->addWeightedEvents(__event_weight__);
  Manager()->InitializeForNewEvent(__event_weight__);

  // Clearing particle containers
  {
      _P_a_I1I_PTorderingfinalstate_REG_.clear();
      _P_a_I2I_PTorderingfinalstate_REG_.clear();
      _P_aPTorderingfinalstate_REG_.clear();
  }

  // Filling particle containers
  {
    for (MAuint32 i=0;i<event.mc()->particles().size();i++)
    {
      if (isP__aPTorderingfinalstate((&(event.mc()->particles()[i])))) _P_aPTorderingfinalstate_REG_.push_back(&(event.mc()->particles()[i]));
    }
  }

  // Sorting particles
  // Sorting particle collection according to PTordering
  // for getting 1th particle
  _P_a_I1I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_aPTorderingfinalstate_REG_,1,PTordering);

  // Sorting particle collection according to PTordering
  // for getting 2th particle
  _P_a_I2I_PTorderingfinalstate_REG_=SORTER->rankFilter(_P_aPTorderingfinalstate_REG_,2,PTordering);

  // Histogram number 1
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("1_M", q.m());
    }
    }
  }
  }

  // Histogram number 2
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("2_M", q.m());
    }
    }
  }
  }

  // Histogram number 3
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("3_M", q.m());
    }
    }
  }
  }

  // Event selection number 1
  //   * Cut: reject PT ( a[1] ) < 40.0, regions = []
  {
    std::vector<MAbool> filter(1,false);
    {
    {
      MAuint32 ind[1];
      for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
      {
        if (_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->pt()<40.0) {filter[0]=true; break;}
      }
    }
    }
    MAbool filter_global = (filter[0]);
    if(!Manager()->ApplyCut(!filter_global, "1_PT ( a[1] ) < 40.0")) return true;
  }

  // Event selection number 2
  //   * Cut: reject PT ( a[2] ) < 30.0, regions = []
  {
    std::vector<MAbool> filter(1,false);
    {
    {
      MAuint32 ind[1];
      for (ind[0]=0;ind[0]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[0]++)
      {
        if (_P_a_I2I_PTorderingfinalstate_REG_[ind[0]]->pt()<30.0) {filter[0]=true; break;}
      }
    }
    }
    MAbool filter_global = (filter[0]);
    if(!Manager()->ApplyCut(!filter_global, "2_PT ( a[2] ) < 30.0")) return true;
  }

  // Histogram number 4
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("4_M", q.m());
    }
    }
  }
  }

  // Histogram number 5
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("5_M", q.m());
    }
    }
  }
  }

  // Histogram number 6
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("6_M", q.m());
    }
    }
  }
  }

  // Histogram number 7
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("7_M", q.m());
    }
    }
  }
  }

  // Histogram number 8
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("8_M", q.m());
    }
    }
  }
  }

  // Histogram number 9
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("9_M", q.m());
    }
    }
  }
  }

  // Histogram number 10
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("10_M", q.m());
    }
    }
  }
  }

  // Histogram number 11
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("11_M", q.m());
    }
    }
  }
  }

  // Histogram number 12
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("12_M", q.m());
    }
    }
  }
  }

  // Event selection number 3
  //   * Cut: reject M ( a[1] a[2] ) < 120.0, regions = []
  {
    std::vector<MAbool> filter(1,false);
    {
    {
      MAuint32 ind[2];
      std::vector<std::set<const MCParticleFormat*> > combis;
      for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
      {
      for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
      {
        if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

        ParticleBaseFormat q;
        q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
        q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
        if (q.m()<120.0) {filter[0]=true; break;}
      }
      }
    }
    }
    MAbool filter_global = (filter[0]);
    if(!Manager()->ApplyCut(!filter_global, "3_M ( a[1] a[2] ) < 120.0")) return true;
  }

  // Event selection number 4
  //   * Cut: reject M ( a[1] a[2] ) > 130.0, regions = []
  {
    std::vector<MAbool> filter(1,false);
    {
    {
      MAuint32 ind[2];
      std::vector<std::set<const MCParticleFormat*> > combis;
      for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
      {
      for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
      {
        if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

        ParticleBaseFormat q;
        q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
        q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
        if (q.m()>130.0) {filter[0]=true; break;}
      }
      }
    }
    }
    MAbool filter_global = (filter[0]);
    if(!Manager()->ApplyCut(!filter_global, "4_M ( a[1] a[2] ) > 130.0")) return true;
  }

  // Histogram number 13
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("13_M", q.m());
    }
    }
  }
  }

  // Histogram number 14
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("14_M", q.m());
    }
    }
  }
  }

  // Histogram number 15
  //   * Plot: M ( a[1] a[2] ) 
  {
  {
    MAuint32 ind[2];
    std::vector<std::set<const MCParticleFormat*> > combis;
    for (ind[0]=0;ind[0]<_P_a_I1I_PTorderingfinalstate_REG_.size();ind[0]++)
    {
    for (ind[1]=0;ind[1]<_P_a_I2I_PTorderingfinalstate_REG_.size();ind[1]++)
    {
    if (_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]==_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]) continue;

    // Checking if consistent combination
    std::set<const MCParticleFormat*> mycombi;
    for (MAuint32 i=0;i<2;i++)
    {
      mycombi.insert(_P_a_I1I_PTorderingfinalstate_REG_[ind[i]]);
      mycombi.insert(_P_a_I2I_PTorderingfinalstate_REG_[ind[i]]);
    }
    MAbool matched=false;
    for (MAuint32 i=0;i<combis.size();i++)
      if (combis[i]==mycombi) {matched=true; break;}
    if (matched) continue;
    else combis.push_back(mycombi);

    ParticleBaseFormat q;
    q+=_P_a_I1I_PTorderingfinalstate_REG_[ind[0]]->momentum();
    q+=_P_a_I2I_PTorderingfinalstate_REG_[ind[1]]->momentum();
      Manager()->FillHisto("15_M", q.m());
    }
    }
  }
  }

  return true;
}

void user::Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files)
{
}
