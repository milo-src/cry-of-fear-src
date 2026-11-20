
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000b020 <.text+0xa020>:
1000b020:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000b023:	ba a0 1f 1a 10       	mov    edx,0x101a1fa0
1000b028:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1000b02e:	8b 00                	mov    eax,DWORD PTR [eax]
1000b030:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
1000b036:	8a 08                	mov    cl,BYTE PTR [eax]
1000b038:	3a 0a                	cmp    cl,BYTE PTR [edx]
1000b03a:	75 20                	jne    0x1000b05c
1000b03c:	84 c9                	test   cl,cl
1000b03e:	74 12                	je     0x1000b052
1000b040:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1000b043:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1000b046:	75 14                	jne    0x1000b05c
1000b048:	83 c0 02             	add    eax,0x2
1000b04b:	83 c2 02             	add    edx,0x2
1000b04e:	84 c9                	test   cl,cl
1000b050:	75 e4                	jne    0x1000b036
1000b052:	33 c9                	xor    ecx,ecx
1000b054:	33 c0                	xor    eax,eax
1000b056:	85 c9                	test   ecx,ecx
1000b058:	0f 94 c0             	sete   al
1000b05b:	c3                   	ret
1000b05c:	1b c9                	sbb    ecx,ecx
1000b05e:	33 c0                	xor    eax,eax
1000b060:	83 c9 01             	or     ecx,0x1
1000b063:	85 c9                	test   ecx,ecx
1000b065:	0f 94 c0             	sete   al
1000b068:	c3                   	ret
