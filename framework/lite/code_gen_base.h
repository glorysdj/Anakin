/* Copyright (c) 2018 Baidu, Inc. All Rights Reserved.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0
   
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. 
*/

#ifndef ANAKIN_FRAMEWORK_LITE_CODE_GEN_BASE_H
#define ANAKIN_FRAMEWORK_LITE_CODE_GEN_BASE_H

namespace anakin {

namespace lite {

/**  
 *  \brief class for target language code generator.
 *
 */
class CodeGenBase : public CodeWritter {
public:
	explicit CodeGenBase(std::string& file_path) {
		_file_path = file_path;
		this->open(file_path, "w");
	}
	virtual ~CodeGenBase(){}

	virtual void gen_files() {}

	void write_to(std::string& file_path) {
	    this->open(file_path, "w");
		this->save();
	}


private:
	std::string _file_path;
};

} /* namespace lite */

} /* namespace anakin */

#endif

