#include "BaseHumainForm.h"

BaseHumainForm::BaseHumainForm(QWidget* parent)
	:QWidget(parent)
{
	containerLayout = new QVBoxLayout(this);

}

void BaseHumainForm::display(Humain* humain)
{
}
