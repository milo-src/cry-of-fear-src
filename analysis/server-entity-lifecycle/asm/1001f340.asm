
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f340 <.text+0x1e340>:
1001f340:	55                   	push   ebp
1001f341:	8b ec                	mov    ebp,esp
1001f343:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1001f346:	81 38 ec 03 00 00    	cmp    DWORD PTR [eax],0x3ec
1001f34c:	75 2c                	jne    0x1001f37a
1001f34e:	6a 64                	push   0x64
1001f350:	6a 00                	push   0x0
1001f352:	83 ec 08             	sub    esp,0x8
1001f355:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
1001f35c:	40 
1001f35d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1001f364:	ff 70 04             	push   DWORD PTR [eax+0x4]
1001f367:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1001f36a:	6a 04                	push   0x4
1001f36c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1001f372:	e8 79 d6 0d 00       	call   0x100fc9f0
1001f377:	83 c4 1c             	add    esp,0x1c
1001f37a:	5d                   	pop    ebp
1001f37b:	c2 04 00             	ret    0x4
