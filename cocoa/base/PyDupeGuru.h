/* 
Copyright 2010 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "HS" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/hs_license
*/

#import <Cocoa/Cocoa.h>
#import "PyApp.h"

@interface PyDupeGuruBase : PyApp
//Actions
- (NSNumber *)addDirectory:(NSString *)name;
- (void)removeDirectory:(NSNumber *)index;
- (void)loadResults;
- (void)loadResultsFrom:(NSString *)filename;
- (void)saveResults;
- (void)saveResultsAs:(NSString *)filename;
- (void)loadIgnoreList;
- (void)saveIgnoreList;
- (void)clearIgnoreList;
- (void)purgeIgnoreList;
- (NSString *)exportToXHTMLwithColumns:(NSArray *)aColIds;
- (void)invokeCommand:(NSString *)cmd;

- (NSNumber *)doScan;

- (void)toggleSelectedMark;
- (void)markAll;
- (void)markInvert;
- (void)markNone;

- (void)addSelectedToIgnoreList;
- (void)openSelected;
- (void)revealSelected;
- (void)makeSelectedReference;
- (void)applyFilter:(NSString *)filter;

- (void)copyOrMove:(NSNumber *)aCopy markedTo:(NSString *)destination recreatePath:(NSNumber *)aRecreateType;
- (void)deleteMarked;
- (void)removeMarked;

//Data
- (NSNumber *)getIgnoreListCount;
- (NSNumber *)getMarkCount;
- (BOOL)scanWasProblematic;

//Scanning options
- (void)setMinMatchPercentage:(NSNumber *)percentage;
- (void)setMixFileKind:(BOOL)mix_file_kind;
- (void)setEscapeFilterRegexp:(BOOL)escape_filter_regexp;
- (void)setRemoveEmptyFolders:(BOOL)remove_empty_folders;
- (void)setIgnoreHardlinkMatches:(BOOL)ignore_hardlink_matches;
- (void)setSizeThreshold:(NSInteger)size_threshold;
@end
