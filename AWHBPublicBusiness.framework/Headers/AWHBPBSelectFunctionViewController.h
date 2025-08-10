//
//  AWHBPBSelectFunctionViewController.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^SelectDataNameBlock)(NSString *selectDataName);
@interface AWHBPBSelectFunctionViewController : UIViewController
@property (nonatomic, strong) NSArray<NSString *> *dataArray;

@property (nonatomic, strong) NSArray<NSString *> *selectDataArray;

@property (nonatomic, copy) SelectDataNameBlock selectDataNameBlock;
@end

NS_ASSUME_NONNULL_END
