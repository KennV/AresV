//
//  DetailViewController.h
//  Ares
//
//  Created by Kenn Villegas on 12/20/17.
//  Copyright © 2017 dubian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Ares+CoreDataModel.h"

@interface KDVPrimeViewController : UIViewController

@property (strong, nonatomic) KDVRootEntity *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

