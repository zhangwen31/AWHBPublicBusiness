//
//  AWHBPBShowImageHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/1/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBShowImageHeaderFooterView : UITableViewHeaderFooterView

/**
 * 展示添加图片
 * @param eachRowNumber  每行展示数量
 * @param title 标题内容
 * @param selectImages 第二个图片数组
 */
- (void)showEachRowNumber:(NSInteger)eachRowNumber
                    title:(NSString *)title
             selectImages:(NSArray *)selectImages;

@end

NS_ASSUME_NONNULL_END
