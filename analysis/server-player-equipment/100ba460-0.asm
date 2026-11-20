
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ba460 <.text+0xb9460>:
100ba460:	55                   	push   ebp
100ba461:	8b ec                	mov    ebp,esp
100ba463:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100ba466:	85 d2                	test   edx,edx
100ba468:	74 1c                	je     0x100ba486
100ba46a:	8b 81 dc 00 00 00    	mov    eax,DWORD PTR [ecx+0xdc]
100ba470:	85 c0                	test   eax,eax
100ba472:	74 12                	je     0x100ba486
100ba474:	52                   	push   edx
100ba475:	50                   	push   eax
100ba476:	e8 e5 eb 05 00       	call   0x10119060
100ba47b:	83 c4 08             	add    esp,0x8
100ba47e:	85 c0                	test   eax,eax
100ba480:	75 04                	jne    0x100ba486
100ba482:	5d                   	pop    ebp
100ba483:	c2 04 00             	ret    0x4
100ba486:	b8 01 00 00 00       	mov    eax,0x1
100ba48b:	5d                   	pop    ebp
100ba48c:	c2 04 00             	ret    0x4
