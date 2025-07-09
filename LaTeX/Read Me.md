This `.tex` file cannot be compiled on overleaf unless the following line is commented out:

`\usepackage[main,largesymbols]{tccomicsans} % https://www.reddit.com/r/LaTeX/comments/1l5no5d/comment/mwm64ze/`

It cannot be compiled on a PC unless:

1. Either the same line is commented out or comic sans is installed and MikTeX is configured correctly. See this Reddit [link](https://www.reddit.com/r/LaTeX/comments/1l5no5d/comment/mwm64ze/).
2. `Python` and `pip` are installed and added to the `PATH`, and `latexminted` is installed and added to the `PATH`, and `AllowedShellCommands[] = latexminted` is added to the `miktex.ini.html` file.
