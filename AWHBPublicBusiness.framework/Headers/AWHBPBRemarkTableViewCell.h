//
//  AWHBPBRemarkTableViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/5/4.
//  备注信息

#import <UIKit/UIKit.h>
#import <AWHBoneRuntime/AWHBRTextView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBRemarkTableViewCell : UITableViewCell

@property (nonatomic, strong) AWHBRTextView *noteTextView;
/**
 * 是否不能编辑
 */
@property (nonatomic, assign) BOOL isNoEdit;

@end

NS_ASSUME_NONNULL_END
