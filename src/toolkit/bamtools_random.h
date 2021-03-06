// ***************************************************************************
// bamtools_random.h (c) 2010 Derek Barnett, Erik Garrison
// Marth Lab, Department of Biology, Boston College
// All rights reserved.
// ---------------------------------------------------------------------------
// Last modified: 20 July 2010 (DB)
// ---------------------------------------------------------------------------
// Grab a random subset of alignments.
// ***************************************************************************

#ifndef BAMTOOLS_RANDOM_H
#define BAMTOOLS_RANDOM_H

#include "bamtools_tool.h"

namespace BamTools {
  
class RandomTool : public AbstractTool {
  
    public:
        RandomTool(void);
        ~RandomTool(void);
  
    public:
        int Help(void);
        int Run(int argc, char* argv[]); 
        
    private:
        struct RandomSettings;
        RandomSettings* m_settings;
};
  
} // namespace BamTools

#endif // BAMTOOLS_RANDOM _H
