NAME=kernel
TEX_FILE=$(NAME).tex
BIB_FILE=$(NAME).bib
PDF_FILE=$(NAME).pdf

.PHONY: all

all: $(PDF_FILE)

$(PDF_FILE): $(TEX_FILE) $(BIB_FILE)
	pdflatex $(TEX_FILE)
	bibtex $(NAME)
	pdflatex $(TEX_FILE)
