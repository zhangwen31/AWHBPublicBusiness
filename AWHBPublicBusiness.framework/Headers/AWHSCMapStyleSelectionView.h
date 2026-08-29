//
//  AWHSCMapStyleSelectionView.h
//  AWHSettingConfig
//
//  Created by 王恒 on 2023/8/5.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHSCMapStyleSelectionTypeView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHSCMapStyleSelectionView : UIView

@property (nonatomic, strong) AWHSCMapStyleSelectionTypeView *mapShowView;
@property (nonatomic, strong) AWHSCMapStyleSelectionTypeView *speedView;
/// 图标排列
@property (nonatomic, strong) AWHSCMapStyleSelectionTypeView *iconArrangementView;
/**
 * 是否展示车牌
 */
@property(nonatomic, assign) BOOL showPlate;
/**
 * 是否展示速度
 */
@property(nonatomic, assign) BOOL showSpeed;
/**
 * 是否展示上下
 */
@property(nonatomic, assign) BOOL markerType;

@end

NS_ASSUME_NONNULL_END
