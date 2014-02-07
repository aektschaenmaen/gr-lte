/* -*- c++ -*- */
/* 
 * Copyright 2013 Communications Engineering Lab (CEL) / Karlsruhe Institute of Technology (KIT)
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_LTE_ROUGH_SYMBOL_SYNC_CC_H
#define INCLUDED_LTE_ROUGH_SYMBOL_SYNC_CC_H

#include <lte/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace lte {

    /*!
     * \brief CP based rough sync to OFDM symbols
     * \ingroup lte
     *
     */
    class LTE_API rough_symbol_sync_cc : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<rough_symbol_sync_cc> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of lte::rough_symbol_sync_cc.
       *
       * To avoid accidental use of raw pointers, lte::rough_symbol_sync_cc's
       * constructor is in a private implementation
       * class. lte::rough_symbol_sync_cc::make is the public interface for
       * creating new instances.
       */
      static sptr make(int fftl, std::string name = "rough_symbol_sync_cc");
    };

  } // namespace lte
} // namespace gr

#endif /* INCLUDED_LTE_ROUGH_SYMBOL_SYNC_CC_H */

