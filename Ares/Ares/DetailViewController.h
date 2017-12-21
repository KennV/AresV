//
//  DetailViewController.h
//  Ares
//
//  Created by Kenn Villegas on 12/20/17.
//  Copyright © 2017 dubian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Ares+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

