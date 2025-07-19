//
//  AWHBPBSelectMapTypeViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^SelectMapTypeBlock)(NSString *mapType);

@interface AWHBPBSelectMapTypeViewController : UIViewController

@property (nonatomic, copy) SelectMapTypeBlock SelectMapTypeBlock;

@property (nonatomic, assign) BOOL isDefault;

@end

NS_ASSUME_NONNULL_END
