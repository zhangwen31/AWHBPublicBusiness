//
//  AWHBPBMLShowViewController.h
//  Medicine
//
//  Created by Visoport on 5/1/17.
//  Copyright © 2017年 Visoport. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

@interface AWHBPBMLShowViewController : AWHBBBaseViewController


@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) NSMutableArray *imageDataSource;
@property (nonatomic, strong) NSMutableArray *selectArray;

@property (nonatomic, strong) UIView *collectionSuperView;
@property (nonatomic, assign) NSInteger maxCount;
@property (nonatomic, assign) CGRect frame;
@property (nonatomic, assign) BOOL isChange;
- (void)initCollectionView;


@end
