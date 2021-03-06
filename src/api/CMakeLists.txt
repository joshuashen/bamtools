# ==========================
# BamTools CMakeLists.txt
# (c) 2010 Derek Barnett
#
# src/api/
# ==========================

# list include paths
include_directories ( ${BamTools_SOURCE_DIR}/src )

# add compiler definitions 
add_definitions(-DBAMTOOLS_API_LIBRARY) # (for proper exporting of library symbols)

# create main BamTools API library
add_library ( BamTools SHARED 
              BamAlignment.cpp 
              BamIndex.cpp 
              BamMultiReader.cpp
              BamReader.cpp
              BamWriter.cpp
              BGZF.cpp
	      internal/BamReader_p.cpp
	      internal/BamStandardIndex_p.cpp
	      internal/BamToolsIndex_p.cpp
	      internal/BamWriter_p.cpp
            )

# link BamTools library with zlib automatically
target_link_libraries ( BamTools z )

# set BamTools library properties
set_target_properties( BamTools PROPERTIES
                       SOVERSION   0.9.0
                       OUTPUT_NAME bamtools
                     )

