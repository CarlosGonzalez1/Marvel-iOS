//
//  DetailViewController.h
//  Marvel-iOS
//
//  Created by Carlos Gonzalez on 5/9/14.
//  Copyright (c) 2014 Carlos.Gonzalez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
