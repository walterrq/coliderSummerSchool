def selection_14():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(115.0,135.0,101,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([115.1,115.3,115.5,115.7,115.9,116.1,116.3,116.5,116.7,116.9,117.1,117.3,117.5,117.7,117.9,118.1,118.3,118.5,118.7,118.9,119.1,119.3,119.5,119.7,119.9,120.1,120.3,120.5,120.7,120.9,121.1,121.3,121.5,121.7,121.9,122.1,122.3,122.5,122.7,122.9,123.1,123.3,123.5,123.7,123.9,124.1,124.3,124.5,124.7,124.9,125.1,125.3,125.5,125.7,125.9,126.1,126.3,126.5,126.7,126.9,127.1,127.3,127.5,127.7,127.9,128.1,128.3,128.5,128.7,128.9,129.1,129.3,129.5,129.7,129.9,130.1,130.3,130.5,130.7,130.9,131.1,131.3,131.5,131.7,131.9,132.1,132.3,132.5,132.7,132.9,133.1,133.3,133.5,133.7,133.9,134.1,134.3,134.5,134.7,134.9])

    # Creating weights for histo: y15_M_0
    y15_M_0_weights = numpy.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0118313054334,0.0108784704182,0.00886077605173,0.0118512892379,0.0173623759228,0.00847835009043,0.00594522468743,0.0118146124157,0.00890423969872,0.00289638405386,0.00883182209032,0.00593724018767,0.00298451578933,0.00838143540522,0.00543519559355,0.00593454259962,0.00242509782787,0.0170942726606,0.00595827054805,0.00847149334487,0.0167355723922,0.00846530874082,0.010849969814,0.0472793131156,0.0555111744809,0.0118976760238,0.01190497936,0.00594065277189,0.0144010061607,0.00596774368336,0.00539166879232,0.0,0.0177646954683,0.00595904193193,0.00886381422156,0.00891765997374,0.0089609025809,0.00594473073109,0.00546335336049,0.020003001112,0.011443892543,0.0,0.00892008690078,0.0134024587566,0.0,0.0089479943063,0.00591659100821,0.0,0.00588526876298,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y15_M_0_weights,\
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
    ymax=(y15_M_0_weights).max()*1.1
    ymin=0 # linear scale
    #ymin=min([x for x in (y15_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    plt.gca().set_yscale("linear")
    #plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_14.png')

# Running!
if __name__ == '__main__':
    selection_14()
