
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include <glib-object.h>

/* enumerations from "typedefs.h" */
#include "typedefs.h"
GType
fr_compression_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { FR_COMPRESSION_VERY_FAST, "FR_COMPRESSION_VERY_FAST", "very-fast" },
      { FR_COMPRESSION_FAST, "FR_COMPRESSION_FAST", "fast" },
      { FR_COMPRESSION_NORMAL, "FR_COMPRESSION_NORMAL", "normal" },
      { FR_COMPRESSION_MAXIMUM, "FR_COMPRESSION_MAXIMUM", "maximum" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("FrCompression", values);
  }
  return etype;
}
GType
fr_overwrite_get_type (void)
{
  static GType etype = 0;
  if (etype == 0) {
    static const GEnumValue values[] = {
      { FR_OVERWRITE_YES, "FR_OVERWRITE_YES", "yes" },
      { FR_OVERWRITE_NO, "FR_OVERWRITE_NO", "no" },
      { FR_OVERWRITE_ASK, "FR_OVERWRITE_ASK", "ask" },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static ("FrOverwrite", values);
  }
  return etype;
}

/* Generated data ends here */

