$Id: README.txt,v 1.1.2.2.2.4.2.1 2010/05/13 13:24:00 adrinux Exp $

AUTHOR/MAINTAINERS
------------------

Clean theme was created and is maintained by Richard Burford, aka, psynaptic of
Freestyle Systems:

http://freestylesystems.co.uk/
http://drupalcontrib.org/

DESCRIPTION
-----------

The idea behind this theme was to make a clean, versatile theme that has just
enough styling to be usable right out of the box but rather than trying to be
everything to everyone, it is more of a base theme. The theme has been built to
speed up your workflow and is (probably) the fastest possible route to creating
your own custom theme.

Features:

- Lean, mean base theme
- Fully XHTML 1.0 Strict and CSS 2.1 valid
- Thorough use of CSS inheritance
- 3 column collapsible layout
- Relative font sizes
- Large base font size
- Fancy blog and comment submission dates
- Add IE conditional stylesheets in info file

IMPORTANT
---------

When working with Clean theme it is important not to hack the "core" files
(just like working with Drupal core itself). In the case of Clean these core
files are all the CSS files in the css/ folder apart from custom.css.

If you wish to benefit from updates to Clean theme (and you should), don't edit
the CSS rules in these files but rather place all CSS for your theme in the
custom.css file. This means you will be able to download the latest version of
Clean and replace these files in your installation.

USAGE
-----

Clean theme's CSS rules have been split into multiple files to facilitate
hot-swapping.

Clean theme uses code from conditional styles module:

http://drupal.org/node/426486

This feature allows you to define IE conditional stylesheets in your theme info file:

conditional-stylesheets[if lte IE 8][all][] = css/ie-lt8.css

CONTRIBUTE
----------

More CSS files will be added in the future but contributions are more than
welcome.

The most obvious files for which replacements could be created are:

layout.css      - Controls the layout.

color.css       - Holds most of the color rules except for primary/secondary
                  menus and tabs.

navigation.css  - Controls the style of the primary/secondary menus and the
                  tabs.

typography.css  - Controls the style of the text (sizes, spacing, font
                  family, etc.).
