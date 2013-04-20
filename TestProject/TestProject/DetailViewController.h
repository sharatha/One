//
//  DetailViewController.h
//  TestProject
//
//  Created by Vmobile on 4/20/13.
//  Copyright (c) 2013 Vmobile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
