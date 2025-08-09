//
//  AWHBPBMLImageCollectionViewController.h
//  Medicine
//
//  Created by Visoport on 5/1/17.
//  Copyright © 2017年 Visoport. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import "AWHBPBMLPhotoImageHelper.h"


@interface AWHBPBMLImageCollectionViewController : UIViewController

@property (nonatomic, strong)PHFetchResult *fetchResult;

@property (nonatomic, copy) void(^okClickComplete)(NSArray<AWHBPBImageModel *> *images);

@property (nonatomic,strong)NSMutableArray *selectArray;//存储选择的相片

@property (nonatomic, assign) NSInteger maxCount;

@end
