#ifndef __PolarDialog__
#define __PolarDialog__

/**
@file
Subclass of PolarDialog, which is generated by wxFormBuilder.
*/

#include "PolarGui.h"
#include "nmea0183/nmea0183.h"
#include <wx/timer.h>

//// end generated include
class polar_pi;
class Polar;
/** Implementing PolarDialog */
class PolarDialog : public PolarGui
{
	public:
		// Handlers for PolarDialog events.
		void PolarDialogOnInitDialog( wxInitDialogEvent& event );
		void OnPaintPolar( wxPaintEvent& event );
		void OnSizePolar( wxSizeEvent& event );
		void OnChoicePolarKnots( wxCommandEvent& event );
		void OnChoiceDegreesPolar( wxCommandEvent& event );
		void OnChoiceWindPolar( wxCommandEvent& event );
		void OnChoiceSourcePolar( wxCommandEvent& event );
		void OnButtonClickFilterPolar( wxCommandEvent& event );
		void OnButtonCreatePolar( wxCommandEvent& event );
		void OnButtonClickSavePolar( wxCommandEvent& event );
		void OnButtonClickLoad( wxCommandEvent& event );
		void OnSplitterSashPosChanged( wxSplitterEvent& event );
		void OnChoiceMode( wxCommandEvent& event );
		void OnGridCellChange( wxGridEvent& event );
		void OnTimer(wxTimerEvent& event);
		void OnTimerRPM(wxTimerEvent& event);
		void OnSizesplitter1( wxSizeEvent& event );
		void OnToggleButtonRecord( wxCommandEvent& event );
		void OnButtonClickClearData( wxCommandEvent& event );
		void OnSizePolarDialog( wxSizeEvent& event );

		polar_pi*	plugin;
		Polar*		polar;

		wxTimer*	timer;
		wxTimer*	timerRPM;

	public:
		/** Constructor */
		PolarDialog( wxWindow* parent, polar_pi* );
		~PolarDialog();

		void setToggleButtonRecord(bool status);
	//// end generated class members

	private:
	
};

#endif // __PolarDialog__