#include "CScrollArea.h"

void CScrollArea::addWidget(QWidget *w, int row, int col)
{
    Widgets.append(w);
    grid->addWidget(w, row, col);
    adaptSize();

}

void CScrollArea::adaptSize()
{
    if(columnCount() >= nColumns )
    {
        int w = 0.5*(width() - grid->verticalSpacing()*(nColumns+1.6));
        int wCorrected = w*columnCount() + grid->verticalSpacing()*(columnCount());
        contentWidget->setFixedHeight(wCorrected);
    }
    contentWidget->setFixedWidth(viewport()->width());

}
