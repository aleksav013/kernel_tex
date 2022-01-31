NAME=kernel
TEX_FILE=$(NAME).tex
BIB_FILE=$(NAME).bib
PDF_FILE=$(NAME).pdf

.PHONY: all clean

all: $(PDF_FILE)

$(PDF_FILE): $(TEX_FILE) $(BIB_FILE)
	pdflatex $(TEX_FILE)
	bibtex $(NAME)
	pdflatex $(TEX_FILE)

clean:
	git clean -dfx
	rm -f $(PDF_FILE)
