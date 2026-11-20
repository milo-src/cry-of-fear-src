
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c5040 <.text+0xc4040>:
100c5040:	55                   	push   ebp
100c5041:	8b ec                	mov    ebp,esp
100c5043:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100c5046:	b8 ff ff ff 7f       	mov    eax,0x7fffffff
100c504b:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
100c504e:	56                   	push   esi
100c504f:	57                   	push   edi
100c5050:	8b 71 10             	mov    esi,DWORD PTR [ecx+0x10]
100c5053:	2b c6                	sub    eax,esi
100c5055:	8b 7a 10             	mov    edi,DWORD PTR [edx+0x10]
100c5058:	3b c7                	cmp    eax,edi
100c505a:	72 29                	jb     0x100c5085
100c505c:	83 79 14 10          	cmp    DWORD PTR [ecx+0x14],0x10
100c5060:	8b c1                	mov    eax,ecx
100c5062:	72 02                	jb     0x100c5066
100c5064:	8b 01                	mov    eax,DWORD PTR [ecx]
100c5066:	83 7a 14 10          	cmp    DWORD PTR [edx+0x14],0x10
100c506a:	72 02                	jb     0x100c506e
100c506c:	8b 12                	mov    edx,DWORD PTR [edx]
100c506e:	57                   	push   edi
100c506f:	52                   	push   edx
100c5070:	56                   	push   esi
100c5071:	50                   	push   eax
100c5072:	51                   	push   ecx
100c5073:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100c5076:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100c5079:	e8 62 00 00 00       	call   0x100c50e0
100c507e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c5081:	5f                   	pop    edi
100c5082:	5e                   	pop    esi
100c5083:	5d                   	pop    ebp
100c5084:	c3                   	ret
100c5085:	e8 36 26 f7 ff       	call   0x100376c0
