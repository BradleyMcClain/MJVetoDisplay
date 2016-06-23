// landscape.cc
// topographical data
// Bradley McClain, University of South Carolina

//-----------------------------------------------------------------------
#include "landscape.hh"

using namespace std;

void landscape() {
	TFile *f = new TFile("Snolab_2.85_out.root");
	TH2F *h = (TH2F*)f->Get("landscape2");
	h->SetDirectory(0);
	TCanvas *can = new TCanvas("can","landscape",0,0,800,800);
	can->cd();
	cout << "1";
	h->Draw();
	cout << "2";
	can->Update();
	cout << "3";
	char landcan[150];
		sprintf(landcan,"landcan.pdf");
		can->Print(landcan,"pdf");
	cout << "4";
	f->Close();
	delete f;
}

int main(int argc, char* argv[]) {
	landscape();
	return 0;
}
