/*
 * Copyright (c) 2008-2015:  G-CSC, Goethe University Frankfurt
 * Copyright (c) 2006-2008:  Steinbeis Forschungszentrum (STZ Ölbronn)
 * Copyright (c) 2006-2015:  Sebastian Reiter
 * Author: Sebastian Reiter
 *
 * This file is part of ProMesh.
 * 
 * ProMesh is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License version 3 (as published by the
 * Free Software Foundation) with the following additional attribution
 * requirements (according to LGPL/GPL v3 §7):
 * 
 * (1) The following notice must be displayed in the Appropriate Legal Notices
 * of covered and combined works: "Based on ProMesh (www.promesh3d.com)".
 * 
 * (2) The following bibliography is recommended for citation and must be
 * preserved in all covered files:
 * "Reiter, S. and Wittum, G. ProMesh -- a flexible interactive meshing software
 *   for unstructured hybrid grids in 1, 2, and 3 dimensions. In preparation."
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 */

#ifndef __H__UG__widget_container__
#define __H__UG__widget_container__

#include <QFrame>

class QLayout;
class QFrame;

class WidgetContainer : public QFrame
{
	Q_OBJECT

	public:
		WidgetContainer(QWidget* parent);
		virtual ~WidgetContainer();

		void addWidget(QWidget* widget, Qt::Alignment alignment = Qt::AlignLeft);

	private:
		QLayout*		m_layout;
};

class WidgetContainerSeparator : public QFrame
{
	Q_OBJECT
	
	public:
		WidgetContainerSeparator(QWidget* parent);
		virtual ~WidgetContainerSeparator();
};

#endif
