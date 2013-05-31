
var StrToken=[ "auto","break","case","char","const","continue",
                      "default","do","double","else","enum","extern",
                      "float","for","goto","if","var","long","register",
                      "return","short","signed","sizeof","static",
                      "struct","switch","typedef","union","unsigned","void",
                      "volatile","while"
					  ];
function StringArrayToString(stringArray){
	var result="";
	for(var i=0; i < stringArray.length;i++){
		result+=stringArray[i];
	}
	return result;
}

function Println(string){
	var old = $('#output_content').html();
	$('#output_content').html(old+'<div>'+string+'</div>');
	
}
function readString(inputString){
	
	var temp="";
	var cch;
	var str1 = new Array();
	var str2 = new Array();
	var str3 = new Array();
	//标识符最大长度为20,str1是标识符和保留字,
    //str2数字字符串,str3运算符
	 for (var index = 0; index < inputString.length; index++)
	 {
		cch = inputString[index];
		while(cch==' '||cch=='\n'||cch=='\t'||cch=='\r'){
			index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;
			}
		}
		
		if(index >= inputString.length){
				break;
		}
		
		
		//标识符和保留字部分
        if((cch>='a'&&cch<='z')||(cch>='A'&&cch<='Z'))
        {  
			var k;    //查找保留字表时标记
            var q=0;     //标志保留字(1:是  0:否)
            var i=0;//       识符字符串记数
            str1[i]=cch;
            i++;
            index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
            while((cch>='a'&&cch<='z')||(cch>='A'&&cch<='Z')||
                  (cch>='0'&&cch<='9')  )
            {

                str1[i]=cch;
                i++;
                index++;
				if(index < inputString.length){
					cch = inputString[index];
				}else{
					break;;
				}
            }
            var STR1=StringArrayToString(str1);
            for(k=0;k<StrToken.length;k++)
            {
			//Println("compare,STR1:"+STR1+"==StrToken["+k+"]:"+StrToken[k]+")");
                if(STR1 == StrToken[k]){
					q=1;					
				}                    
            }
            if(q==1)
            {
				Println("(1,"+STR1+")");
            }
            else
            {
				Println("(2,"+STR1+")");
            }
        }
		//无符号整数部分
		else if(cch<='9'&&cch>='0')
        {
            var j=0;          //数字字符串记数
            str2[j]=cch;
            j++;
            index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
            while(cch<='9'&&cch>='0')
            {
                str2[j]=cch;
                j++;
                index++;
				if(index < inputString.length){
					cch = inputString[index];
				}else{
					break;;
				}
            }
            var STR2=StringArrayToString(str2);
			Println("(3,"+STR2+")");
        }
		 //运算符部分
        else if(cch=='+'||cch=='-'||cch=='*'||cch=='/'||cch=='=')
        {
			Println("(4,"+cch+")");
            index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
        }
		else if(cch=='<'||cch=='>'||cch=='='||cch=='+'||cch=='-'||cch=='*')
        {
            var p=0;       //运算符字符串记数
            str3[p]=cch;
            p++;
            index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
            if(cch=='=')
            {
                str3[p]=cch;
                p++;
				var STR3 =StringArrayToString(str3);
                Println("(4,"+STR3+")");
            }
            else
            {
                var STR3 =StringArrayToString(str3);
                Println("(4,"+STR3+")");
            }
             index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
        }
		//分隔符部分
        else if(cch==','||cch==':'||cch==';'||cch=='('||cch==')'||
                cch=='['||cch==']'||cch=='{'||cch=='}')
        {
			Println("(5,"+cch+")");
             index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
        }
        //错误输出
        else
        {
			Println("!!!ERROR!!!");
            
             index++;
			if(index < inputString.length){
				cch = inputString[index];
			}else{
				break;;
			}
        }
	 }
	
	
		
}

$(function(){
	
	$('#input_button').click(function(){
		var inputString = $('#input_content').val();
		$('#output_content').html('');
		readString(inputString);
		//$('#output_content').html(inputString+'\n'+readString(inputString));
		return false;
	});
});