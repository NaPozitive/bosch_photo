/*********************************************************************
 *
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2012, Robert Bosch LLC.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Robert Bosch nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************/


photo_reporter::photo_reporter( void )
{
}
photo_reporter::~photo_reporter( void )
{
}


static void photo_reporter::contextError( GPContext *context, const char *format, va_list args, void *data )
{
  char error_string[1024]; // Maximum size of error message.

  vsnprintf( error_string, 1024, format, args );
  //va_end( args );

  std::cerr << std::endl << "photo_reporter: Context error " << std::endl
	    << error_string << std::endl;
}

static void photo_reporter::contextStatus( GPContext *context, const char *format, va_list args, void *data )
{
  char status_string[1024]; // Maximum size of status message.

  vsnprintf( status_string, 1024, format, args );
  //va_end( args );

  std::cout << "photo_reporter: Status " << status_string << std::endl;
}

static void photo_reporter::error( std::string function_name )
{
  std::cerr << "photo_reporter: Error executing function '" << function name << "'." << std::endl;
}

static void photo_reporter::error( std::string function_name, std::string additional_message )
{
  photo_reporter_error_reporter( function_name );
  std::cerr << additional_message << std::endl;
}
