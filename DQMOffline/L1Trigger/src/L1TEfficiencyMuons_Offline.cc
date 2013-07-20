 /*
  * \file L1TEfficiencyMuons_Offline.cc
  *
  * $Date: 2012/11/22 17:10:19 $
  * $Revision: 1.1 $
  * \author J. Pela, P. Musella
  *
  */
 
 // L1TMonitor includes
 #include "DQMOffline/L1Trigger/interface/L1TEfficiencyMuons_Offline.h"
  
 #include "DQMServices/Core/interface/DQMStore.h"
 
 #include "DataFormats/L1GlobalTrigger/interface/L1GlobalTriggerReadoutRecord.h"
 #include "DataFormats/Common/interface/ConditionsInEdm.h" // Parameters associated to Run, LS and Event
 #include "DataFormats/Luminosity/interface/LumiDetails.h" // Luminosity Information
 #include "DataFormats/Luminosity/interface/LumiSummary.h" // Luminosity Information
 
 #include "CondFormats/L1TObjects/interface/L1GtTriggerMenu.h"
 #include "CondFormats/L1TObjects/interface/L1GtTriggerMenuFwd.h"
 #include "CondFormats/L1TObjects/interface/L1GtPrescaleFactors.h"
 #include "CondFormats/L1TObjects/interface/L1GtTriggerMask.h"            // L1Gt - Masks
 #include "CondFormats/DataRecord/interface/L1GtTriggerMaskAlgoTrigRcd.h" // L1Gt - Masks
 #include "CondFormats/DataRecord/interface/L1GtTriggerMenuRcd.h"
 #include "CondFormats/DataRecord/interface/L1GtPrescaleFactorsAlgoTrigRcd.h"
 
 #include "DataFormats/Histograms/interface/MEtoEDMFormat.h"
 
 #include "TList.h"
 
 using namespace edm;
 using namespace std;
 
 //_____________________________________________________________________
 L1TEfficiencyMuons_Offline::L1TEfficiencyMuons_Offline(const ParameterSet & ps){

   // Inicializing Variables
   if (m_verbose) {
     cout << "[L1TEfficiencyMuons_Offline:] ____________ Storage inicialization ____________ " << endl;
     cout << "[L1TEfficiencyMuons_Offline:] Setting up dbe folder: L1T/Efficiency/Muon" << endl;
   }
   
   dbe = Service < DQMStore > ().operator->();
   dbe->setVerbose(0);
   dbe->setCurrentFolder("L1T/Efficiency/Muons");
   
   // Inicializing Variables
   if (m_verbose) {cout << "[L1TEfficiencyMuons_Offline:] Pointer for DQM Store: " << dbe << endl;}
 }
 
 //_____________________________________________________________________
 L1TEfficiencyMuons_Offline::~L1TEfficiencyMuons_Offline(){}
 
 //_____________________________________________________________________
void L1TEfficiencyMuons_Offline::beginJob(void){
   
  if (m_verbose) {cout << "[L1TEfficiencyMuons_Offline:] Called beginJob." << endl;}
   
}

//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::endJob(void){

  if (m_verbose) {cout << "[L1TEfficiencyMuons_Offline:] Called endJob." << endl;}

}
 
//_____________________________________________________________________
// BeginRun: as input you get filtered events...
//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::beginRun(const edm::Run& run, const edm::EventSetup& iSetup){

  if (m_verbose) {cout << "[L1TEfficiencyMuons_Offline:] Called endRun." << endl;}
}  

//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::endRun(const edm::Run& run, const edm::EventSetup& iSetup){
  
  if (m_verbose) {cout << "[L1TEfficiencyMuons_Offline:] Called endRun." << endl;}
}

//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::beginLuminosityBlock(LuminosityBlock const& lumiBlock, EventSetup const& c) {
  
  if(m_verbose){
    cout << "[L1TEfficiencyMuons_Offline:] Called beginLuminosityBlock at LS=" 
         << lumiBlock.id().luminosityBlock() << endl;
  }
  
}

//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::endLuminosityBlock(LuminosityBlock const& lumiBlock, EventSetup const& c) {

  if(m_verbose){
    cout << "[L1TEfficiencyMuons_Offline:] Called endLuminosityBlock at LS=" 
         << lumiBlock.id().luminosityBlock() << endl;
  }
  
}


//_____________________________________________________________________
void L1TEfficiencyMuons_Offline::analyze(const Event & iEvent, const EventSetup & eventSetup){


}

//define this as a plug-in
DEFINE_FWK_MODULE(L1TEfficiencyMuons_Offline);