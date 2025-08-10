//
//  AWHBPBUnitSelectionView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/6/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBUnitSelectionClick)(NSString *unit);

@interface AWHBPBUnitSelectionView : UIView

@property (nonatomic, strong) NSArray<NSString *> *unitArray;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *selectUnit;

@property (nonatomic, assign) BOOL isHiddenLine;

@property (nonatomic, copy) AWHBPBUnitSelectionClick UnitSelectionClick;

@end

NS_ASSUME_NONNULL_END
