
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f150 <.text+0xe150>:
1000f150:	55                   	push   ebp
1000f151:	8b ec                	mov    ebp,esp
1000f153:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f156:	56                   	push   esi
1000f157:	85 c9                	test   ecx,ecx
1000f159:	74 35                	je     0x1000f190
1000f15b:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f15e:	3b 81 cc 00 00 00    	cmp    eax,DWORD PTR [ecx+0xcc]
1000f164:	7f 2a                	jg     0x1000f190
1000f166:	8b b1 d0 00 00 00    	mov    esi,DWORD PTR [ecx+0xd0]
1000f16c:	6b c0 4c             	imul   eax,eax,0x4c
1000f16f:	03 f0                	add    esi,eax
1000f171:	03 f1                	add    esi,ecx
1000f173:	8b 4e 40             	mov    ecx,DWORD PTR [esi+0x40]
1000f176:	83 f9 01             	cmp    ecx,0x1
1000f179:	7e 15                	jle    0x1000f190
1000f17b:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000f17e:	8b 80 14 01 00 00    	mov    eax,DWORD PTR [eax+0x114]
1000f184:	99                   	cdq
1000f185:	f7 7e 44             	idiv   DWORD PTR [esi+0x44]
1000f188:	5e                   	pop    esi
1000f189:	99                   	cdq
1000f18a:	f7 f9                	idiv   ecx
1000f18c:	8b c2                	mov    eax,edx
1000f18e:	5d                   	pop    ebp
1000f18f:	c3                   	ret
1000f190:	33 c0                	xor    eax,eax
1000f192:	5e                   	pop    esi
1000f193:	5d                   	pop    ebp
1000f194:	c3                   	ret
