#ifndef analysis_user_h
#define analysis_user_h

#include "SampleAnalyzer/Process/Analyzer/AnalyzerBase.h"
#include "SampleAnalyzer/Interfaces/root/RootMainHeaders.h"

namespace MA5
{
class user : public AnalyzerBase
{
  INIT_ANALYSIS(user,"MadAnalysis5job")

 public : 
  virtual MAbool Initialize(const MA5::Configuration& cfg,
                          const std::map<std::string,std::string>& parameters);
  virtual void Finalize(const SampleFormat& summary, const std::vector<SampleFormat>& files);
  virtual MAbool Execute(SampleFormat& sample, const EventFormat& event);

 private : 
  // Declaring particle containers
  std::vector<const MCParticleFormat*> _P_a_I1I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_a_I2I_PTorderingfinalstate_REG_;
  std::vector<const MCParticleFormat*> _P_aPTorderingfinalstate_REG_;
  MAbool isP__aPTorderingfinalstate(const MCParticleFormat* part) const {
     if ( part==0 ) return false;
     if ( !PHYSICS->Id->IsFinalState(part) ) return false;
     if ( (part->pdgid()!=22) ) return false;
     return true; }
};
}

#endif