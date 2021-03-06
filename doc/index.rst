
.. title:: Fityk --- curve fitting and peak fitting software

.. meta::
   :description: Fityk. Open-source curve-fitting and data analysis software. Linux, Windows, Mac OS X.
   :keywords: curve fitting, peak fitting, software, Voigt, Doniach-Sunjic

.. role:: smallfont
   :class: smallfont

.. role:: html(raw)
   :format: html

.. raw:: html

  <div align="right" class="screenshot">
   <p class="quote">
    <i>Excellent GUI and command-line curve fitting tool</i><br />
    <span class="quote-author">
     - John Allspaw in
     <a href="http://oreilly.com/catalog/9780596518585"><i>The art of capacity planning</i></a>
    </span>
   </p>
   <a href="screens.html#mac-os-x">
    <img alt="[screenshot]" src="_images/fityk-1.0.1-osx-so.png"
    style="width: 436px; height: 303px;" />
    </a>
   <p class="caption">see <a href="screens.html">more screenshots</a></p>
  </div>

Fityk *[fi:tik]* is a program for data processing
and nonlinear **curve fitting**.

Although it is primarily used...

* by scientists who analyse data from powder diffraction, chromatography,
  photoluminescence and photoelectron spectroscopy,
  infrared and Raman spectroscopy, and other experimental techniques,

..

* to fit peaks -- bell-shaped functions (Gaussian, Lorentzian, Voigt,
  Pearson VII, bifurcated Gaussian, EMG, Doniach-Sunjic, etc.),

... the program can be used for any task that requires fitting a curve
to 2D (*x*,\ *y*) data.

.. _contents:

:ref:`Features` |
:ref:`Download` |
:ref:`Documentation` |
:ref:`Support <Support>`

.. _Features:

Features
========

* intuitive graphical interface (and also command line interface),
* support for many data file formats, thanks to
  the `xylib library <http://xylib.sourceforge.net/>`_,
* dozens of built-in functions and support for user-defined functions,
* equality constraints,
* fitting systematic errors of the *x* coordinate of points (for example
  instrumental zero error or sample displacement correction
  in powder diffraction),
* manual, graphical placement of peaks and auto-placement using peak detection
  algorithm,
* various optimization methods (standard Marquardt least-squares algorithm,
  Genetic Algorithms, Nelder-Mead simplex),
* handling series of datasets,
* automation with macros (scripts) and embedded Lua for more complex scripting
* the accuracy of nonlinear regression :wiki:`verified <NIST-certified-data>`
  with reference datasets from NIST,
* an add-on for powder diffraction data (Pawley refinement)
* modular :wiki:`architecture <Architecture>`,
* open source licence (`GPL <http://creativecommons.org/licenses/GPL/2.0/>`_).

.. _Download:

Download
========

In an attempt to make this software self-sustaining and actively
developed in the future,
`new binaries </subscribers>`_ are available to subscribers only:

|ico-win| MS Windows: :download:`-setup.exe`  $

|ico-osx| Mac OS X (10.4 or later): :download:`-osx.zip`  $

|ico-tux| Linux: binary `RPM and deb packages </subscribers>`_
:smallfont:`for about 10 distros (incl. Ubuntu, Fedora, Suse), 32- and 64-bit.`

.. raw:: html

   <div class="subscr">

Subscribers have access to all versions of the program and to e-mail support.
The program can be installed on many computers and can be also used
after the end of subscription.

* `1 month subscription <https://sites.fastspring.com/nieto/instant/fityk-1M>`_: $115 (≈ €90)

* `1 year subscription <https://sites.fastspring.com/nieto/instant/fityk-1Y>`_: $199 (≈ €150)

* `2 years subscription <https://sites.fastspring.com/nieto/instant/fityk-2Y>`_: $299 (≈ €225)

.. raw:: html

   <div class="smallfont">

There is a discount for home users and students,
email wojdyr@gmail.com for details.

.. raw:: html

    </div>
    </div>


Versions 0.9.8 and older are free:
for `Windows <https://github.com/wojdyr/fityk/downloads>`_
and Linux (Ubuntu PPA_ and RPMs from OBS_).

Source code: `GitHub <https://github.com/wojdyr/fityk>`_
:html:`<a class="FlattrButton" style="display:none;" rev="flattr;button:compact;" href="http://fityk.nieto.pl"></a>`

Version 1.2.1 was released on 2012-11-05
(`changelog <https://github.com/wojdyr/fityk/raw/master/NEWS>`_).
New version `notifications <http://fityk-announce.nieto.pl/>`_
are delivered via email and feeds.

.. _OBS: http://download.opensuse.org/repositories/home://wojdyr/
.. _PPA: https://launchpad.net/~wojdyr/+archive/fityk
.. |ico-win| image:: img/ico-win.png
.. |ico-tux| image:: img/ico-tux.png
.. |ico-osx| image:: img/ico-osx.png

.. _Documentation:

Documentation
=============

* `Manual <fityk-manual.html>`_
  (chapters :ref:`intro`, :ref:`getstarted`, :ref:`lang`, :ref:`data`,
  :ref:`model`, :ref:`fit`, :ref:`ref`)
  and the same `in PDF <https://github.com/wojdyr/fityk/releases/download/v1.2.1/fityk-manual.pdf>`_,

* `Fityk Wiki <https://github.com/wojdyr/fityk/wiki>`_
  (you are welcome to contribute).

Citing Fityk in academic papers:
M. Wojdyr,
`J. Appl. Cryst. 43, 1126-1128 <http://dx.doi.org/10.1107/S0021889810030499>`_
(2010)
[`reprint <http://wojdyr.github.io/fityk-JAC-10-reprint.pdf>`_]

.. _Support:

Questions?
==========

* Google group `fityk-users <http://groups.google.com/group/fityk-users/>`_
  (you may select "no mail" and use it like forum)

* or wojdyr@gmail.com

Feel free to send questions, comments, requests, bug reports,
and success stories.
Asking for a new feature usually results in adding the request to
the `TODO list <https://github.com/wojdyr/fityk/raw/master/TODO>`_
or, if it already is in the list, in assigning higher priority to it.

.. raw:: html

   <script type="text/javascript"> <!--
   if (window != top) top.location.href = location.href;
   $(document).ready(function(){
     $("#features").hide();
     $("#features").prev().after(
      "<p id='expand_features'><a href=''><span class='h1'>Features</span> &nbsp; <span class='smallfont'>[show]</span></a></p>");
     $("#expand_features a").click(function(event){
       $(this).parent().hide();
       $("#features").show('slow');
       event.preventDefault();
     });

  $('#download a[href*="/subscribers/"]').click(function(event){
    event.preventDefault();
    var reply = prompt("Your password, please.", "")
    if (reply != null)
      location.href = $(this).attr("href") + "?u=" + reply;
  });

     var s = document.createElement('script'), t = document.getElementsByTagName('script')[0];
     s.type = 'text/javascript';
     s.async = true;
     s.src = 'http://api.flattr.com/js/0.6/load.js?mode=auto';
     t.parentNode.insertBefore(s, t);

   });
   //--> </script>


