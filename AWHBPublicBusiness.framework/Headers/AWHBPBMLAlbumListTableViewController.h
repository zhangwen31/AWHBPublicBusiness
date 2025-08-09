//
//  AWHBPBMLAlbumListTableViewController.h
//  Medicine
//
//  Created by Visoport on 5/1/17.
//  Copyright © 2017年 Visoport. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AWHBPBMLPhotoImageHelper.h"
#import "AWHBPBMLAlbumListTableViewCell.h"
#import "AWHBPBMLImageCollectionViewController.h"


@interface AWHBPBMLAlbumListTableViewController : UITableViewController

@property (nonatomic, copy) void(^okClickComplete)(NSArray<AWHBPBImageModel *> *images);

@property (nonatomic, strong) NSMutableArray *selctImageArray;

@property (nonatomic, assign) NSInteger maxCount;

@end
