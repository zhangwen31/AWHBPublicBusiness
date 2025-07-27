//
//  AWHBPBPublicSelectHeadView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/4/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBReturnPublicFieldTextBlock)(NSString *textFieldText);
typedef void(^AWHBPBPublicHeadReturnClickTitle)(NSString *title);
typedef void(^AWHBPBPublicHeadReturnClickDetale)(NSString *title, NSString *detale);
typedef void(^AWHBPBPublicHeadReturnInputBlock)(NSString *title, NSString *detale);

@interface AWHBPBPublicSelectHeadView : UIView
@property(nonatomic,strong) NSArray<NSString *> *titleArray;
@property(nonatomic,strong) NSArray<NSString *> *detaleArray;
@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detaleTextField;
@property(nonatomic,strong)UIImageView *rightImageView;
@property (nonatomic, assign) NSInteger maxLength;
@property (nonatomic, assign) NSInteger maxNum;
///是否不执行右边按钮点击时间
@property (nonatomic, assign) BOOL isNoSelectDetale;
///是否展示选择cell背景
@property (nonatomic, assign) BOOL isShowSelect;
///是否不能编辑
@property (nonatomic, assign) BOOL isNoEnabled;
@property(nonatomic,copy)AWHBPBReturnPublicFieldTextBlock ReturnPublicFieldTextBlock;
@property(nonatomic,copy)AWHBPBPublicHeadReturnClickTitle ReturnClickTitle;
@property(nonatomic,copy)AWHBPBPublicHeadReturnClickDetale ReturnClickDetale;
@property(nonatomic,copy)AWHBPBPublicHeadReturnInputBlock ReturnInputBlock;

@end

NS_ASSUME_NONNULL_END
