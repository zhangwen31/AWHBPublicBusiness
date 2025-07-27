//
//  AWHBPBJumpNavigationView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/6/17.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

extern NSString * const kAWHBPBInternalNavigation;

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBJumpNavigationView : UIView

@property(nonatomic,strong) AWHBBCarModel *model;
@property(nonatomic,strong) NSString *endName;
@property(nonatomic,assign) BOOL isGoogle;

@end

NS_ASSUME_NONNULL_END
