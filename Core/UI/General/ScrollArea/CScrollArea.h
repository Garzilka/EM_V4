#ifndef CSCROLLAREA_H
#define CSCROLLAREA_H
#include <QGridLayout>
#include <QResizeEvent>
#include <QScrollArea>
#include <QScrollBar>
#include <QSizePolicy>

class CScrollArea : public QScrollArea
{
    QWidget *contentWidget;
    QGridLayout *grid;
    int nRows = 2;
    int nColumns = 1;
public:
    QVector<QWidget*> Widgets;
    CScrollArea(QWidget *parent = Q_NULLPTR,int W = 250, int H = 1666666)
    :QScrollArea(parent)
    {
        setWidgetResizable(true);
        contentWidget = new QWidget(this);
        setWidget(contentWidget);
        grid = new QGridLayout(contentWidget);
        grid->setHorizontalSpacing(10);
        grid->setVerticalSpacing(5);
        setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        setMaximumSize(W, H);
        this->setMaximumHeight(H);
        QSizePolicy policy;
        policy.setHorizontalPolicy(QSizePolicy::Maximum);
        policy.setVerticalPolicy(QSizePolicy::Expanding);
        this->setSizePolicy(policy);
    }

    void addWidget(QWidget *w, int row, int col);

    int columnCount() const
    {
        if(grid->count() == 0)
        {
            return 0;
        }
        return grid->rowCount();
    }

    private:
    void adaptSize();
    protected:
    void resizeEvent(QResizeEvent *event)
    {
        QScrollArea::resizeEvent(event);
        adaptSize();
    }
};

#endif // CSCROLLAREA_H
