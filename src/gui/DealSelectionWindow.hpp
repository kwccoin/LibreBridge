#ifndef DEALSELECTIONWINDOW_HPP
#define DEALSELECTIONWINDOW_HPP

#include <QDialog>
class QPushButton;
class QResizeEvent;
class QCloseEvent;
class QLineEdit;
class PlayWindow;

class DealSelectionWindow : public QDialog 
{
	Q_OBJECT
	public:
		explicit DealSelectionWindow(QWidget *parent = Q_NULLPTR);
		QLineEdit *seedTextBox;
		QPushButton *seedMinusButton;
		QPushButton *seedPlusButton;
		QPushButton *playButton;
		void closeEvent(QCloseEvent *event);
	signals:
	public slots:
		void playThisDeal();
		void minusDeal();
		void plusDeal();
		void updateOnSeedChange(const QString &text);
	protected:
	private:
		PlayWindow *parent;
};

#endif