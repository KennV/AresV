//
//  DetailViewController.m
//  Ares
//
//  Created by Kenn Villegas on 12/20/17.
//  Copyright © 2017 dubian. All rights reserved.
//

#import "KDVPrimeViewController.h"

@interface KDVPrimeViewController ()

@end

@implementation KDVPrimeViewController

- (void)configureView {
  // Update the user interface for the detail item.
  if (self.detailItem) {
      self.detailDescriptionLabel.text = self.detailItem.timestamp.description;
  }
}


- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
  [self configureView];
}


- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}


#pragma mark - Managing the detail item

- (void)setDetailItem:(Event *)newDetailItem {
  if (_detailItem != newDetailItem) {
      _detailItem = newDetailItem;
      
      // Update the view.
      [self configureView];
  }
}


@end
