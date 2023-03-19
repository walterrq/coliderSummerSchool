def selection_8():

    # Library import
    import numpy
    import matplotlib
    import matplotlib.pyplot   as plt
    import matplotlib.gridspec as gridspec

    # Library version
    matplotlib_version = matplotlib.__version__
    numpy_version      = numpy.__version__

    # Histo binning
    xBinning = numpy.linspace(105.0,160.0,101,endpoint=True)

    # Creating data sequence: middle of each bin
    xData = numpy.array([105.275,105.825,106.375,106.925,107.475,108.025,108.575,109.125,109.675,110.225,110.775,111.325,111.875,112.425,112.975,113.525,114.075,114.625,115.175,115.725,116.275,116.825,117.375,117.925,118.475,119.025,119.575,120.125,120.675,121.225,121.775,122.325,122.875,123.425,123.975,124.525,125.075,125.625,126.175,126.725,127.275,127.825,128.375,128.925,129.475,130.025,130.575,131.125,131.675,132.225,132.775,133.325,133.875,134.425,134.975,135.525,136.075,136.625,137.175,137.725,138.275,138.825,139.375,139.925,140.475,141.025,141.575,142.125,142.675,143.225,143.775,144.325,144.875,145.425,145.975,146.525,147.075,147.625,148.175,148.725,149.275,149.825,150.375,150.925,151.475,152.025,152.575,153.125,153.675,154.225,154.775,155.325,155.875,156.425,156.975,157.525,158.075,158.625,159.175,159.725])

    # Creating weights for histo: y9_M_0
    y9_M_0_weights = numpy.array([0.0339796456359,0.0172116558465,0.0280592808634,0.0407266622935,0.0258125732839,0.0352183981324,0.0317483062279,0.0340403625103,0.0267329229182,0.0350595631555,0.0440342775828,0.023239309237,0.032296636175,0.0172646840544,0.037557429258,0.023367476581,0.032809946846,0.0299379539448,0.0290493942093,0.0293687132069,0.044317134391,0.031642675815,0.0234943842389,0.0283009802883,0.0174790139339,0.0201030960121,0.0284811612204,0.0120140073967,0.0290648081876,0.032277969916,0.0240511884385,0.0179382405509,0.0145493480182,0.0139940714744,0.0290167568853,0.0366075571601,0.113421778154,0.0302252769132,0.0170915733974,0.0240900783868,0.0210832853211,0.0236664802759,0.0289497186765,0.0196398727544,0.015094130231,0.0150737576697,0.0292801000093,0.0262710074438,0.0359466799777,0.017666853758,0.0212719061506,0.0226932238216,0.0242765577498,0.0116815876626,0.0151492472276,0.0176817020227,0.0212900754062,0.0237698203503,0.0176104908171,0.0144141493349,0.0178903358302,0.0152590460567,0.00826352308812,0.0212594970965,0.0268814971785,0.0147544821885,0.0238095348204,0.026056837888,0.0212363119996,0.011742155665,0.00916438881255,0.00919084222255,0.0299328235865,0.0143531507489,0.0152447131182,0.0113919216779,0.0183117237644,0.0179015149726,0.0214181442657,0.0149277233948,0.0,0.0,0.00305618879667,0.0148979398326,0.00933626955776,0.014702512117,0.00919405785784,0.0175091295952,0.0210471552308,0.00615572912102,0.00925872098552,0.0289480467294,0.00613573446566,0.0119720712982,0.0154055704641,0.0264472948003,0.0150353830477,0.00926758688596,0.00616158551663,0.0168952409981])

    # Creating a new Canvas
    fig   = plt.figure(figsize=(8,6),dpi=80)
    frame = gridspec.GridSpec(1,1)
    pad   = fig.add_subplot(frame[0])

    # Creating a new Stack
    pad.hist(x=xData, bins=xBinning, weights=y9_M_0_weights,\
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
    ymax=(y9_M_0_weights).max()*1.1
    ymin=0 # linear scale
    #ymin=min([x for x in (y9_M_0_weights) if x])/100. # log scale
    plt.gca().set_ylim(ymin,ymax)

    # Log/Linear scale for X-axis
    plt.gca().set_xscale("linear")
    #plt.gca().set_xscale("log",nonposx="clip")

    # Log/Linear scale for Y-axis
    plt.gca().set_yscale("linear")
    #plt.gca().set_yscale("log",nonposy="clip")

    # Saving the image
    plt.savefig('../../HTML/MadAnalysis5job_0/selection_8.png')

# Running!
if __name__ == '__main__':
    selection_8()
