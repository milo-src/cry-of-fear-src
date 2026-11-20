
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017000 <.text+0x16000>:
10017000:	55                   	push   ebp
10017001:	8b ec                	mov    ebp,esp
10017003:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10017006:	85 c0                	test   eax,eax
10017008:	74 0d                	je     0x10017017
1001700a:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1001700d:	85 c9                	test   ecx,ecx
1001700f:	74 06                	je     0x10017017
10017011:	8b 01                	mov    eax,DWORD PTR [ecx]
10017013:	5d                   	pop    ebp
10017014:	ff 60 4c             	jmp    DWORD PTR [eax+0x4c]
10017017:	83 e8 80             	sub    eax,0xffffff80
1001701a:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1001701d:	5d                   	pop    ebp
1001701e:	e9 1d 11 00 00       	jmp    0x10018140
