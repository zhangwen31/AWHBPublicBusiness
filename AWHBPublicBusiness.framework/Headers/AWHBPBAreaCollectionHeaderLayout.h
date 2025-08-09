//
//  AWHBPBAreaCollectionHeaderLayout.h
//  Test
//
//  Created by 王恒 on 2023/4/28.
//

#import <UIKit/UIKit.h>
 
@protocol AWHBPBHorizontalCollectionLayoutDelegate <NSObject>
 
@optional
// 用协议传回 item 的内容,用于计算 item 宽度
- (NSString *)collectionViewItemSizeWithIndexPath:(NSIndexPath *)indexPath;
// 用协议传回 headerSize 的 size
- (CGSize)collectionViewDynamicHeaderSizeWithIndexPath:(NSIndexPath *)indexPath;
// 用协议传回 footerSize 的 size
- (CGSize)collectionViewDynamicFooterSizeWithIndexPath:(NSIndexPath *)indexPath;
@end
 
@interface AWHBPBAreaCollectionHeaderLayout : UICollectionViewFlowLayout
 
 
// item 的行距（默认4.0）
@property (nonatomic, assign) CGFloat lineSpacing;
// item 的间距 （默认4.0）
@property (nonatomic, assign) CGFloat interitemSpacing;
// header 高度（默认0.0）
@property (nonatomic, assign) CGFloat headerViewHeight;
// footer 高度（默认0.0）
@property (nonatomic, assign) CGFloat footerViewHeight;
// item 高度 (默认30)
@property (nonatomic, assign) CGFloat itemHeight;
// collectionView 宽度 默认屏幕宽度
@property (nonatomic, assign) CGFloat collectionViewWidth;
// footer 边距缩进（默认UIEdgeInsetsZero）
@property (nonatomic, assign) UIEdgeInsets footerInset;
// header 边距缩进（默认UIEdgeInsetsZero）
@property (nonatomic, assign) UIEdgeInsets headerInset;
// item 边距缩进（默认UIEdgeInsetsZero）
@property (nonatomic, assign) UIEdgeInsets itemInset;
// item Label Font（默认系统字体15）
@property (nonatomic, copy) UIFont *labelFont;
 
@property (nonatomic, weak) id<AWHBPBHorizontalCollectionLayoutDelegate> delegate;
 
 
@end
