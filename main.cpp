#include "UnregisteredUser.h"
#include "RegisteredUser.h"
#include "Report.h"
#include "Plans.h"
#include "fitnessPlans.h"
#include "dietPlans.h"
#include "Payment.h"
#include "FitnessTrainers.h"
#include "Nutritionists.h"
#include "Inventory.h"
#include "Supplements.h"
#include "Equipments.h"
#include "Administrator.h"
#include <iostream>
using namespace std;

int main(){
	//object creation	
	RegisteredUser *rg = new RegisteredUser();
  Plans *fp = new fitnessPlans();
	Plans *dp = new dietPlans();
	Inventory *supp = new Supplements();
	Inventory *equip = new Equipments();
	fitnessPlans *fp1 = new fitnessPlans();
	FitnessTrainers *t1 = new FitnessTrainers();
	FitnessTrainers *t2 = new FitnessTrainers();
	FitnessTrainers *t3 = new FitnessTrainers();
	FitnessTrainers *t4 = new FitnessTrainers();
	FitnessTrainers *t5 = new FitnessTrainers();	
	dietPlans *dp1 = new dietPlans();
	Nutritionists *n1 = new Nutritionists();
	Nutritionists *n2 = new Nutritionists();
	Nutritionists *n3 = new Nutritionists();
	Nutritionists *n4 = new Nutritionists();
	Nutritionists *n5 = new Nutritionists();

	fitnessPlans *fp2 = new fitnessPlans();
	UnregisteredUser *ur = new UnregisteredUser();
	
	Report *report = new Report;
	Payment *payment = new Payment;
	Administrator *admin = new Administrator;
	
	ur->addfitnessPlans();
	ur->DisplayDetails();
	ur->overviewPlans();
	ur->registerUser();
	fp1->addtrainer(t1,t2,t3,t4,t5);
	dp1->addNutritionist(n1,n2,n3,n4,n5);
	fp->displayDetails();
	dp->displayDetails();
	supp->displayDetails();
	equip->displayDetails();
	fp1->displayDetails();
  fp1->assignTrainer();
  dp1->displayDetails();
  t1->createProfile();
  t1->displayDetails();
  t1->enroll();
  t1->uploadVideos();
  n1->createProfile();
	n1->displayDetails();
	n1->enroll();
	n1->uploadNutritionPlans();
	report->displayDetails();
	report->orderReportDetails();
	report->paymentReportDetails();
	report->salesReportDetails();
	payment->checkPayment();
	payment->confirmPayment();
	payment->displayDetails();
	payment->generateTransactionId();
	admin->addReport();
	admin->addTrainer();
	admin->addupInventory();
	admin->changeScheduleTime();
	admin->changeTrainer();
	admin->deleteInventory();
	admin->displayDetails();
	admin->generateReports();
	admin->updateInventory();
	admin->updatePlans();
	ur->registerUser();
	ur->DisplayDetails();
	rg->login();
	rg->logout();
	rg->purchasePlans();
	rg->registerUser();
	rg->requestNutritionist();
	rg->scheduleTime();
	rg->selectTrainer();
	
	delete rg;
	delete fp;
	delete dp;
	delete supp;
	delete equip;
	delete dp1;
	delete fp1;
	delete fp2;
	delete ur;
	delete report;
	delete payment;
	delete admin;
}
