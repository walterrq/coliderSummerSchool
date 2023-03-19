def selection_0():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(100.0,200.0,51,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([101.0,103.0,105.0,107.0,109.0,111.0,113.0,115.0,117.0,119.0,121.0,123.0,125.0,127.0,129.0,131.0,133.0,135.0,137.0,139.0,141.0,143.0,145.0,147.0,149.0,151.0,153.0,155.0,157.0,159.0,161.0,163.0,165.0,167.0,169.0,171.0,173.0,175.0,177.0,179.0,181.0,183.0,185.0,187.0,189.0,191.0,193.0,195.0,197.0,199.0])

    # Creating weights for histo: y1_M_0
    y1_M_0_weights = numpy.array([0.320397638086,0.332333580462,0.259886810562,0.284617067101,0.258973589301,0.245292214154,0.23003557448,0.231809893143,0.254286656799,0.215205057897,0.209979128157,0.163507180829,0.334567179171,0.143600924279,0.154670936206,0.203648003997,0.133625934892,0.102106735301,0.115208987673,0.104489315521,0.138068348889,0.114823917391,0.10127708081,0.140347973949,0.0725385416121,0.0830689100214,0.0863270024892,0.0928070800612,0.0838539712155,0.0822200076364,0.0866877108377,0.0783147082361,0.0548790341568,0.0611727021951,0.0653513778921,0.0465872379996,0.0315346260053,0.0694382537782,0.0456576911525,0.0262333765856,0.0485394802626,0.0506791436273,0.0609483869543,0.0429801545145,0.0541770339487,0.0416882695702,0.035590817657,0.0569091390694,0.0331081764857,0.044519986056])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y1_M_0_weights,\
             label="$hsig$", histtype="stepfilled", rwidth=1.0,\
             color="#5954d8", edgecolor="#5954d8", linewidth=1, linestyle="solid",\
             bottom=None, cumulative=False, normed=False, align="mid", orientation="vertical")


    # Axis
    plt.rc('text',usetex=False)
    plt.xlabel(r"$M$ $[ a_{1} a_{2} ]$ $(GeV/c^{2})$ ",\
               fontsize=16,color="black")
    plt.ylabel(r"$\mathrm{Events}$ $(\mathcal{L}_{\mathrm{int}} = 0.001\ \mathrm{fb}^{-1})$ ",\
               fontsize=16,color="black")

    # Boundary of y-axis
    ymax=(y1_M_0_weights).max()*1.1
    ymin=0 # linear scale
    #ymin=min([x for x in (y1_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    plt.gca().set_yscale("linear")
    #plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_0.png')

# Running!
if __name__ == '__main__':
    selection_0()
