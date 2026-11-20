
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f160 <.text+0x1e160>:
1001f160:	55                   	push   ebp
1001f161:	8b ec                	mov    ebp,esp
1001f163:	8d 45 10             	lea    eax,[ebp+0x10]
1001f166:	50                   	push   eax
1001f167:	6a 00                	push   0x0
1001f169:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1001f16c:	6a ff                	push   0xffffffff
1001f16e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1001f171:	e8 1a 26 fe ff       	call   0x10001790
1001f176:	8b 08                	mov    ecx,DWORD PTR [eax]
1001f178:	ff 70 04             	push   DWORD PTR [eax+0x4]
1001f17b:	83 c9 01             	or     ecx,0x1
1001f17e:	51                   	push   ecx
1001f17f:	e8 dd dd 13 00       	call   0x1015cf61
1001f184:	83 c9 ff             	or     ecx,0xffffffff
1001f187:	83 c4 1c             	add    esp,0x1c
1001f18a:	85 c0                	test   eax,eax
1001f18c:	0f 48 c1             	cmovs  eax,ecx
1001f18f:	5d                   	pop    ebp
1001f190:	c3                   	ret
