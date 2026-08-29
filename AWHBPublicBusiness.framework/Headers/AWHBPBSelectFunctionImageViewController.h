//
//  AWHBPBSelectFunctionImageViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/3/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBSelectDataNameBlock)(NSString *selectDataName);

@interface AWHBPBSelectFunctionImageViewController : UIViewController

@property (nonatomic, strong) NSArray<NSString *> *dataArray;

@property (nonatomic, strong) NSArray<NSString *> *selectDataArray;

@property (nonatomic, strong) NSArray<UIImage *> *showImageArray;

@property (nonatomic, strong) NSArray<UIImage *> *selectShowImageArray;

@property (nonatomic, copy) AWHBPBSelectDataNameBlock selectDataNameBlock;

@end

NS_ASSUME_NONNULL_END
