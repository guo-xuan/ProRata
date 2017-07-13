
#ifndef PROTEOMEINFO_H
#define PROTEOMEINFO_H

//#define DEBUG

#include <vector>
#include <iostream>
#include <string>
#include <iterator>
#include <iomanip>
#include <fstream>

#include "../../protara/Common/directoryStructure.h"
#include "../../protara/Common/proRataConfig.h"
#include "../../protara/Common/tinyxml.h"
#include "../../protara/PRatio/peptideInfo.h"
#include "../../protara/PRatio/peptideRatio.h"
#include "../../protara/PRatio/proteinInfo.h"
#include "../../protara/PRatio/proteinRatio.h"
#include "../../protara/SicForma/chromatogram.h"
#include "../../protara/SicForma/idData.h"
#include "../../protara/SicForma/isotopologue.h"
#include "../../protara/SicForma/msData.h"
#include "../../protara/SicForma/sicInfo.h"

using namespace std;

class ProteomeInfo
{
	public:
		ProteomeInfo();
		~ProteomeInfo();

		bool processPeptidesXIC(string sIDFilename);
		bool processProteins();

		bool readFileQPR( string sFilename );
		bool writeFileQPR( string sRunBaseName );
		bool writeFileTAB( string sRunBaseName );
		bool writeFileLabelFree( string sRunBaseName );

		bool getProteinRatio( ProteinInfo * queryProteinInfo, ProteinRatio * queryProteinRatio );

		// retrieve ProteinInfo by searching Keyword in both Locus and Description
		vector< ProteinInfo * > getProteinInfo( string sKeyword );  

		// retrieve ProteinInfo by searching Locus, require exact match 
		vector< ProteinInfo * > getProteinInfo4Locus( string sLocus );

		// retrieve Locus list
		void getLocusList( vector< string > & vsLocusListRef ); 
		void getLocusDescriptionList( vector< string > & vsLocusListRef, vector< string > & vsDescriptionRef); 
		
		// these two sorting methods sort in the ascending order
		void sortProteinInfo( vector< ProteinInfo * > & vpProteinInfoInput, string sKey );
		void sortPeptideInfo( vector< PeptideInfo * > & vpPeptideInfoInput, string sKey );
		// these two sorting method sort in the descending order
		void sortProteinInfoDescending( vector< ProteinInfo * > & vpProteinInfoInput, string sKey );
		void sortPeptideInfoDescending( vector< PeptideInfo * > & vpPeptideInfoInput, string sKey );

	private:
		void addPeptideInfo( PeptideInfo * pCurrentPeptideInfo );

		vector< ProteinInfo * > vpProteinInfo;
		vector< PeptideInfo * > vpPeptideInfo;

		string getValue( TiXmlElement * pElement, const vector<string> &vsTagList );
		vector< TiXmlElement * > getElement(  TiXmlElement * pElement, const vector<string> &vsTagList );
};
#endif //PROTEOMEINFO_H
