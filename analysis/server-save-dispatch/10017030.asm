
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017030 <.text+0x16030>:
10017030:	55                   	push   ebp
10017031:	8b ec                	mov    ebp,esp
10017033:	6a ff                	push   0xffffffff
10017035:	68 7d d2 19 10       	push   0x1019d27d
1001703a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10017040:	50                   	push   eax
10017041:	51                   	push   ecx
10017042:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10017047:	33 c5                	xor    eax,ebp
10017049:	50                   	push   eax
1001704a:	8d 45 f4             	lea    eax,[ebp-0xc]
1001704d:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10017053:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10017056:	8d 4d f0             	lea    ecx,[ebp-0x10]
10017059:	e8 c2 ef 0f 00       	call   0x10116020
1001705e:	ff 75 18             	push   DWORD PTR [ebp+0x18]
10017061:	8d 4d f0             	lea    ecx,[ebp-0x10]
10017064:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1001706b:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1001706e:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10017071:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10017074:	68 58 61 1a 10       	push   0x101a6158
10017079:	e8 42 3d 10 00       	call   0x1011adc0
1001707e:	8d 4d f0             	lea    ecx,[ebp-0x10]
10017081:	e8 fa ef 0f 00       	call   0x10116080
10017086:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10017089:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10017090:	59                   	pop    ecx
10017091:	8b e5                	mov    esp,ebp
10017093:	5d                   	pop    ebp
10017094:	c3                   	ret
