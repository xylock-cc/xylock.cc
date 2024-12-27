--//lol
--//doitenroi.9941

local v0 = string.char;
local v1 = string.byte;
local v2 = string.sub;
local v3 = bit32 or bit;
local v4 = v3.bxor;
local v5 = table.concat;
local v6 = table.insert;
local function v7(v155, v156)
	local v157 = {};
	for v348 = 1, #v155 do
		v6(v157, v0(v4(v1(v2(v155, v348, v348 + 1)), v1(v2(v156, 1 + (v348 % #v156), 1 + (v348 % #v156) + 1))) % 256));
	end
	return v5(v157);
end
loadstring(game:HttpGet("https://raw.githubusercontent.com/CongoOhioDog/automatic-spork/main/Adonis%20Bypass.lua"))();
repeat
	wait();
until game:IsLoaded() 
local v8 = loadstring(game:HttpGet("https://raw.githubusercontent.com/CongoOhioDog/automatic-spork/refs/heads/main/Library.lua%20(5).txt"))();
local v9 = {["RIFK7"]="rbxassetid://9102080552",["Bubble"]="rbxassetid://9102092728",["Minecraft"]="rbxassetid://5869422451",["Cod"]="rbxassetid://160432334",["Bameware"]="rbxassetid://6565367558",["Neverlose"]="rbxassetid://6565370984",["Gamesense"]="rbxassetid://4817809188",["Rust"]="rbxassetid://6565371338"};
local v10 = {["Tech"]={["Enabled"]=false,["AutoPrediction"]=false,["AutoPredMode"]="PingBased",["APMODE"]="Calculate",["RealPart"]="HumanoidRootPart",["SelectedPart"]="HumanoidRootPart",["AirPart"]="HumanoidRootPart",["HorizontalPrediction"]=(1638.1 - (1295 + 343)),["VerticalPrediction"]=0.1,["HorizontalPrediction2"]=(0.1 - 0),["VerticalPrediction2"]=(0.1 - 0),["jumpoffset"]=(1092 - (770 + 322)),["jumpoffset2"]=-(0.21 + 0),["jumpoffset3"]=(0.28 + 0),["ShootDelay"]=(0.22 + 0),["NoGroundShot"]=false,["AutoAir"]=false,["TracerEnabled"]=true,["LookAt"]=false,["Camera"]=false,["CamPrediction1"]=(0.1 - 0),["CamPrediction2"]=(0.1 - 0),["smoothness"]=(0.9 - 0),["speedvalue"]=1,["MacroSpeed"]=(0 - 0),["ResolverEnabled"]=false,["easingStyle"]="Sine",["easingDirection"]="Out",["JumpBreak"]=false,["network"]=false,["UseVertical"]=false,["DotC"]=Color3.fromRGB(0 + 0, 0 - 0, 0 + 0)}};
v10.Tech.SelectedPart = v10.Tech.RealPart;
local v13 = false;
local v14 = false;
local v15 = false;
local v16 = {["Enabled"]=true,["Keybind"]=Enum.KeyCode.Q,["Autoselect"]=false,["Prediction"]=(0.145 + 0),["RealPrediction"]=(0.145 + 0),["Resolver"]=false,["ResolverType"]="Recalculate",["JumpOffset"]=(0.06 - 0),["RealJumpOffset"]=0.09,["HitParts"]={"HumanoidRootPart"},["RealHitPart"]="HumanoidRootPart",["KoCheck"]=false,["LookAt"]=false,["CSync"]={["Enabled"]=false,["Type"]="Orbit",["Distance"]=10,["Height"]=2,["Speed"]=(4 + 6),["RandomAmount"]=10,["Color"]=Color3.fromRGB(1174 - 919, 842 - 587, 105 + 150),["Saved"]=nil,["Visualize"]=false},["ViewAt"]=false,["Tracer"]=false,["Highlight"]=true,["HighlightColor1"]=Color3.fromRGB(1261 - 1006, 1086 - (762 + 69), 255),["HighlightColor2"]=Color3.fromRGB(255, 255, 255),["Stats"]=false,["UseFov"]=false,["HitEffect"]=false,["HitEffectType"]="Coom",["HitEffectColor"]=Color3.fromRGB(825 - 570, 255, 220 + 35),["HitSounds"]=false,["HitSound"]="Bameware",["HitChams"]=false,["HitChamsMaterial"]=Enum.Material.Neon,["HitChamsDuration"]=(2 + 0),["HitChamsColor"]=Color3.fromRGB(616 - 361, 0, 0 + 0),["HitChamColorEnabled"]=false,["HitChamsTransparency"]=(0 + 0),["HitChamsAcc"]=false,["SkeleColor"]=Color3.fromRGB(603 - 448, 157 - (8 + 149), 155)};
local v17 = false;
local v18 = game:GetService("UserInputService");
local v19 = game:GetService("Players");
local v20 = game:GetService("ReplicatedStorage");
local v21 = game:GetService("RunService");
local v22 = game:GetService("Workspace");
local v23 = game:GetService("Stats");
local v24 = game:GetService("CoreGui");
local v25 = game:GetService("StarterGui");
local v26 = game:GetService("SoundService");
local v27 = game:GetService("Stats");
local v21 = game:GetService("RunService");
local v28 = v19.LocalPlayer;
local v29 = true;
local v30;
local v31;
local v32 = game:GetService("Lighting");
local v33 = function()
	local v158 = v10.Tech.SelectedPart;
	local v159 = v30.Character[v158];
	if v159 then
		local v367 = tick();
		local v368 = v159.Position;
		local v369 = Vector3.new(1320 - (1199 + 121), 0 - 0, 0);
		if v10.Tech.ResolverEnabled then
			if (v10.Tech.RESOLVER == "Recalculate") then
				local v576 = 0 - 0;
				while true do
					if (v576 == (0 + 0)) then
						if lastPos then
							local v701 = 0 - 0;
							local v702;
							while true do
								if (0 == v701) then
									v702 = v367 - lastTick;
									if (v702 > (0 - 0)) then
										local v765 = v368 - lastPos;
										v369 = v765 / v702;
									end
									break;
								end
							end
						end
						lastPos = v368;
						v576 = 1;
					end
					if (v576 == (1 + 0)) then
						lastTick = v367;
						break;
					end
				end
			elseif (v10.Tech.RESOLVER == "MoveDirection") then
				v369 = v30.Character.Humanoid.MoveDirection * v30.Character.Humanoid.WalkSpeed * (1808.5 - (518 + 1289));
			elseif (v10.Tech.RESOLVER == "LookVector") then
				v369 = v159.CFrame.LookVector * v10.Tech.HorizontalPrediction * (1.5 - 0);
			end
		else
			v369 = v159.AssemblyLinearVelocity;
		end
		local v370 = v10.Tech.HorizontalPrediction;
		local v371 = v10.Tech.VerticalPrediction;
		local v372 = v10.Tech.jumpoffset or (0 + 0);
		if v10.Tech.UseVertical then
			return Vector3.new(v368.X + (v369.X / v370), v368.Y + (v369.Y / v371), v368.Z + (v369.Z / v370)) + Vector3.new(0 - 0, v10.Tech.jumpoffset, 0 + 0);
		else
			return Vector3.new(v368.X + (v369.X * v370), v368.Y + (v369.Y * v371), v368.Z + (v369.Z * v370)) + Vector3.new(0, v10.Tech.jumpoffset, 469 - (304 + 165));
		end
	end
	return nil;
end;
v10.Tech.LockType = "Namecall";
v10.Tech.RESOLVER = "MoveDirection";
local v36 = tick();
local v37 = nil;
local v38 = {};
local v39 = game.Players.LocalPlayer:GetMouse();
v38[1 + 0] = hookmetamethod(v39, "__index", newcclosure(function(v160, v161)
	local v162 = 160 - (54 + 106);
	while true do
		if (v162 == (1969 - (1618 + 351))) then
			local v408 = 0 + 0;
			local v409;
			while true do
				if (v408 == 0) then
					v409 = 0;
					while true do
						if (v409 == (1016 - (10 + 1006))) then
							if ((v161 == "Hit") and (v10.Tech.LockType == "Index") and v10.Tech.Enabled and v30 and v30.Character and v10.Tech.SelectedPart) then
								local v703 = v33();
								if v703 then
									return CFrame.new(v703);
								end
							end
							return v38[1 + 0](v160, v161);
						end
					end
					break;
				end
			end
		end
	end
end));
local v41 = {"UpdateMousePos","GetMousePos","MousePos","MOUSE","MousePosUpdate","UpdateMousePosI2","UpdateMousePosI"};
local v42 = getrawmetatable(game);
local v43 = v42.__namecall;
setreadonly(v42, false);
v42.__namecall = newcclosure(function(...)
	local v163 = {...};
	local v164 = getnamecallmethod();
	if (v10.Tech.Enabled and (v10.Tech.LockType == "Namecall")) then
		if (v30 and v30.Character and (v164 == "FireServer")) then
			for v548, v549 in ipairs(v41) do
				if (v163[2] == v549) then
					v163[1 + 2] = v33();
					return v43(unpack(v163));
				end
			end
		end
	end
	return v43(...);
end);
setreadonly(v42, true);
HighlightEnabled = false;
local function v45(v165)
	if (HighlightEnabled and (v165 ~= v28)) then
		local v373 = 0 - 0;
		local v374;
		while true do
			if (0 == v373) then
				v374 = v165.Character;
				if (v374 and v374:FindFirstChild("HumanoidRootPart")) then
					local v600 = 0 - 0;
					local v601;
					local v602;
					local v603;
					while true do
						if (v600 == (1 + 0)) then
							if v28:IsFriendsWith(v165.UserId) then
								v603 = Color3.fromRGB(0, 0 - 0, 441 - (165 + 21));
							elseif (v165 == v30) then
								v603 = Color3.fromRGB(366 - (61 + 50), 0, 0 + 0);
							end
							if (v602 and not v374:FindFirstChild("Highlight")) then
								local v711 = Instance.new("Highlight");
								v711.Name = "Highlight";
								v711.Parent = v374;
								v711.Adornee = v374;
								v711.FillColor = v603;
								v711.OutlineColor = v603;
								v711.FillTransparency = 0.5 - 0;
								v711.OutlineTransparency = 0 - 0;
							elseif not v602 then
								local v741 = 0 + 0;
								local v742;
								while true do
									if (v741 == (1460 - (1295 + 165))) then
										v742 = v374:FindFirstChild("Highlight");
										if v742 then
											v742:Destroy();
										end
										break;
									end
								end
							end
							break;
						end
						if (0 == v600) then
							v601, v602 = game:GetService("Workspace").CurrentCamera:worldToViewportPoint(v374.HumanoidRootPart.Position);
							v603 = Color3.fromRGB(59 + 196, 255, 103 + 152);
							v600 = 1398 - (819 + 578);
						end
					end
				end
				break;
			end
		end
	elseif not HighlightEnabled then
		local v510 = 0;
		local v511;
		while true do
			if (v510 == 0) then
				v511 = v165.Character;
				if v511 then
					local v670 = 1402 - (331 + 1071);
					local v671;
					while true do
						if (v670 == (743 - (588 + 155))) then
							v671 = v511:FindFirstChild("Highlight");
							if v671 then
								v671:Destroy();
							end
							break;
						end
					end
				end
				break;
			end
		end
	end
end
for v166, v167 in ipairs(v19:GetPlayers()) do
	v45(v167);
end
v19.PlayerAdded:Connect(function(v168)
	v168.CharacterAdded:Connect(function()
		v45(v168);
	end);
end);
v21.Heartbeat:Connect(function()
	for v349, v350 in ipairs(v19:GetPlayers()) do
		v45(v350);
	end
end);
local v46 = game:GetService("Players");
local v47 = v46.LocalPlayer;
local v48 = function()
	if v30 then
		local v375 = 1282 - (546 + 736);
		local v376;
		while true do
			if ((1937 - (1834 + 103)) == v375) then
				v376 = v47.Character;
				if v376 then
					local v605 = 0;
					local v606;
					while true do
						if (v605 == (0 + 0)) then
							v606 = v376:FindFirstChildOfClass("Tool");
							if (v606 and v606:IsA("Tool")) then
								v606:Activate();
							end
							break;
						end
					end
				end
				break;
			end
		end
	end
end;
local v49 = Instance.new("BillboardGui");
v49.Name = "PP";
v49.Size = UDim2.new(2, 0 - 0, 2, 1766 - (1536 + 230));
v49.AlwaysOnTop = true;
local v53 = Instance.new("ImageLabel", v49);
v53.Name = "img3";
v53.Size = UDim2.new(491.6 - (128 + 363), 0 + 0, 0.6, 0);
v53.BackgroundTransparency = 1;
v53.Image = "rbxassetid://108770683919433";
v53.ImageTransparency = 0 - 0;
local v59 = Instance.new("Part");
v59.Size = Vector3.new(0, 0 + 0, 0 - 0);
v59.Anchored = true;
v59.Parent = workspace;
v49.Adornee = v59;
v49.Parent = workspace;
v21.RenderStepped:Connect(function()
	if (v30 and v30.Character and v10.Tech.VelocityDot and v30.Character:FindFirstChild(v10.Tech.SelectedPart)) then
		local v377 = 0 - 0;
		local v378;
		while true do
			if (v377 == 1) then
				v59.Position = v378;
				v49.Enabled = true;
				break;
			end
			if (v377 == 0) then
				local v554 = 0 - 0;
				local v555;
				while true do
					if (v554 == 0) then
						v555 = 0;
						while true do
							if ((0 + 0) == v555) then
								v378 = v33();
								v59.Transparency = 1009 - (615 + 394);
								v555 = 1;
							end
							if (v555 == 1) then
								v377 = 1 + 0;
								break;
							end
						end
						break;
					end
				end
			end
		end
	else
		local v379 = 0 + 0;
		while true do
			if (v379 == 1) then
				v49.Enabled = false;
				break;
			end
			if (v379 == (0 - 0)) then
				v59.Position = Vector3.new(0 - 0, 651 - (59 + 592), 0);
				v59.Transparency = 2 - 1;
				v379 = 1 - 0;
			end
		end
	end
end);
local v65 = v10.Tech.ShootDelay;
local v66 = nil;
local v67 = false;
local v68 = function()
	if (v30 and v30.Character) then
		local v380 = 0 + 0;
		local v381;
		local v382;
		while true do
			if (v380 == (172 - (70 + 101))) then
				if (v381 and v382) then
					local v607 = 0;
					local v608;
					while true do
						if (v607 == (0 - 0)) then
							v608 = v381:GetState() == Enum.HumanoidStateType.Freefall;
							if (v608 and v10.Tech.AutoAir) then
								if not v66 then
									v66 = tick();
								else
									local v743 = 0 + 0;
									local v744;
									while true do
										if (v743 == 0) then
											v744 = tick() - v66;
											if (v744 >= v65) then
												if not v67 then
													v67 = true;
													while v30 and v30.Character and v608 do
														v48();
														task.wait(0.00001 - 0);
														v608 = v381:GetState() == Enum.HumanoidStateType.Freefall;
														if not v608 then
															v67 = false;
															v66 = nil;
															break;
														end
													end
													v67 = false;
												end
											end
											break;
										end
									end
								end
							else
								v66 = nil;
								v67 = false;
							end
							break;
						end
					end
				end
				break;
			end
			if (v380 == (241 - (123 + 118))) then
				v381 = v30.Character:FindFirstChildOfClass("Humanoid");
				v382 = v30.Character:FindFirstChild("HumanoidRootPart");
				v380 = 1 + 0;
			end
		end
	end
end;
local v69 = loadstring(game:HttpGet("https://raw.githubusercontent.com/CongoOhioDog/automatic-spork/refs/heads/main/Prediction", true))();
local v70 = loadstring(game:HttpGet("https://raw.githubusercontent.com/CongoOhioDog/automatic-spork/refs/heads/main/badpred.lua", true))();
local v27 = game:GetService("Stats");
local v71 = function(v169)
	return (v169 / (13 + 987)) + (1399.037 - (653 + 746));
end;
local v72 = function()
	local v170 = tonumber(string.split(v27.Network.ServerStatsItem["Data Ping"]:GetValueString(), "(")[1]);
	local function v171(v351)
		local v352, v353 = nil, math.huge;
		for v383, v384 in ipairs(v351) do
			local v385 = 0 - 0;
			local v386;
			while true do
				if (v385 == (0 - 0)) then
					v386 = math.abs(v170 - v384[2 - 1]);
					if (v386 < v353) then
						v353, v352 = v386, v384[1 + 1];
					end
					break;
				end
			end
		end
		return v352;
	end
	if v10.Tech.CamAutoprediction then
		local v387 = 0 + 0;
		local v388;
		while true do
			if (v387 == 0) then
				v388 = v171(v70);
				if v388 then
					v10.Tech.CamPrediction1, v10.Tech.CamPrediction2 = v388, v388;
				end
				break;
			end
		end
	end
	if (v170 and v10.Tech.AutoPrediction) then
		local v389, v390 = v10.Tech.APMODE;
		if ((v389 == "Default") or (v389 == "Sets Based")) then
			v390 = v171(((v389 == "Sets Based") and v69) or v70);
			if v390 then
				v10.Tech.HorizontalPrediction, v10.Tech.VerticalPrediction = v390, v390 * (((v389 == "Sets Based") and (0.91 + 0)) or 1);
			end
		elseif (v389 == "Math Based") then
			local function v579(v612, v613)
				return (v612 * math.log(v170 + 1 + 0)) + v613;
			end
			v10.Tech.HorizontalPrediction, v10.Tech.VerticalPrediction = v579(0.105 + 0, -0.3), v579(0.1 - 0, -0.3);
		elseif (v389 == "Calculate") then
			local v640 = v71(v170);
			v10.Tech.HorizontalPrediction, v10.Tech.VerticalPrediction = v640, v640;
		end
	end
end;
local v73 = function(v172)
	local v173 = 0 + 0;
	local v174;
	local v175;
	local v176;
	while true do
		if (v173 == 1) then
			if (v176 and v175) then
				if (v10.Tech and v10.Tech.LookAt and not v10.Tech.Macroing) then
					if (v172 and v172.Character) then
						local v672, v673 = v172.Character:FindFirstChild("HumanoidRootPart"), v172.Character:FindFirstChildOfClass("Humanoid");
						if (v673 and v672) then
							local v705, v706 = v175.Position, v672.Position;
							local v707 = Vector3.new(v706.X - v705.X, 0 - 0, v706.Z - v705.Z).unit;
							v175.CFrame = CFrame.new(v705, v705 + v707);
							v176.AutoRotate = false;
						end
					end
				else
					v176.AutoRotate = true;
				end
			elseif v174:FindFirstChild("Humanoid") then
				v174.Humanoid.AutoRotate = true;
			end
			break;
		end
		if (v173 == (1234 - (885 + 349))) then
			v174 = game.Players.LocalPlayer.Character or game.Players.LocalPlayer.CharacterAdded:Wait();
			v175, v176 = v174:FindFirstChild("HumanoidRootPart"), v174:FindFirstChildOfClass("Humanoid");
			v173 = 1 + 0;
		end
	end
end;
local v74 = function()
	if (v30 and v30.Character and v30.Character:FindFirstChild("Humanoid")) then
		local v391 = v30.Character.Humanoid:GetState();
		if (v391 == Enum.HumanoidStateType.Freefall) then
			v10.Tech.jumpoffset = v10.Tech.jumpoffset3;
			v10.Tech.SelectedPart = v10.Tech.AirPart;
		elseif (v391 == Enum.HumanoidStateType.Jumping) then
			v10.Tech.jumpoffset = v10.Tech.jumpoffset2;
		else
			v10.Tech.SelectedPart = v10.Tech.RealPart;
			v10.Tech.jumpoffset = 0;
		end
	end
end;
v21.Stepped:Connect(function(v177, v178)
	local v179 = 0 - 0;
	while true do
		if (1 == v179) then
			v74();
			v72();
			v179 = 5 - 3;
		end
		if (v179 == (970 - (915 + 53))) then
			if (v10.Tech.AutoShoot and (v28.Character:FindFirstChildWhichIsA("Tool") ~= nil)) then
				v28.Character:FindFirstChildOfClass("Tool"):Activate();
			end
			break;
		end
		if (v179 == 0) then
			v68();
			v73(v30);
			v179 = 802 - (768 + 33);
		end
	end
end);
function Recalculate(v180)
	local v181 = 0 - 0;
	local v182;
	local v183;
	local v184;
	local v185;
	local v186;
	local v187;
	local v188;
	while true do
		if (v181 == (0 - 0)) then
			v182 = v180.HumanoidRootPart.Position;
			v183 = tick();
			task.wait(328.1 - (287 + 41));
			v181 = 1;
		end
		if (v181 == 1) then
			v184 = v180.HumanoidRootPart.Position;
			v185 = tick();
			v186 = v185 - v183;
			v181 = 849 - (638 + 209);
		end
		if (v181 == 3) then
			v183 = v185;
			return v188;
		end
		if (v181 == (2 + 0)) then
			local v412 = 1686 - (96 + 1590);
			while true do
				if (v412 == (1672 - (741 + 931))) then
					v187 = v184 - v182;
					v188 = v187 / v186;
					v412 = 1 + 0;
				end
				if (v412 == (2 - 1)) then
					v182 = v184;
					v181 = 13 - 10;
					break;
				end
			end
		end
	end
end
local v75 = game.Workspace.CurrentCamera;
local v76 = function()
	if (v30 and v30.Character and v30.Character:FindFirstChild("Humanoid") and v10.Tech.ViewAt) then
		v75.CameraSubject = v30.Character.Humanoid;
	elseif (v28.Character and v28.Character:FindFirstChild("Humanoid")) then
		v75.CameraSubject = v28.Character.Humanoid;
	end
end;
v21.Heartbeat:Connect(function()
	v76();
	if (v10.Tech.Camera and v30 and v30.Character and v10.Tech.SelectedPart) then
		local v394 = 0 + 0;
		local v395;
		local v396;
		local v397;
		while true do
			if (v394 == (0 + 0)) then
				v395 = v22.CurrentCamera;
				v396 = v10.Tech.SelectedPart;
				v394 = 1 + 0;
			end
			if (v394 == 1) then
				v397 = v30.Character[v396];
				if v397 then
					local v616 = v10.Tech.CamPrediction1;
					local v617 = v10.Tech.jumpoffset or (0 - 0);
					local v618 = v10.Tech.CamPrediction2;
					local v619;
					if v10.Tech.CamResolverEnabled then
						v619 = Recalculate(CamTarget.Character);
					else
						v619 = v397.AssemblyLinearVelocity;
					end
					local v620;
					if v10.Tech.UseExternal then
						v620 = Vector3.new(v397.Position.X + (v619.X / v616), v397.Position.Y + (v619.Y / v618), v397.Position.Z + (v619.Z / v616));
					else
						v620 = Vector3.new(v397.Position.X + (v619.X * v616), v397.Position.Y + (v619.Y * v618), v397.Position.Z + (v619.Z * v616));
					end
					local v621 = Enum.EasingStyle[v10.Tech.easingStyle];
					local v622 = Enum.EasingDirection[v10.Tech.easingDirection];
					local v623 = v10.Tech.smoothness or (0.1 + 0);
					v395.CFrame = v395.CFrame:Lerp(CFrame.new(v395.CFrame.Position, v620), v623, v621, v622);
				end
				break;
			end
		end
	end
end);
v28.Character:WaitForChild("Humanoid").StateChanged:Connect(function(v189, v190)
	if (v10.Tech.JumpBreak and (v190 == Enum.HumanoidStateType.Freefall)) then
		task.wait(0.17 + 0);
		v28.Character.HumanoidRootPart.Velocity = Vector3.new(0, -(61 - 46), 0 + 0);
	end
end);
local v77 = false;
local v78 = "Behind";
local v79 = Vector3.new(494 - (64 + 430), 0 + 0, -1);
local v80, v81 = -(10363 - (106 + 257)), 7090 + 2910;
local v82, v83 = -10000, 10721 - (496 + 225);
local v84, v85 = -(20449 - 10449), 48712 - 38712;
game:GetService("RunService").heartbeat:Connect(function()
	local v191 = 1658 - (256 + 1402);
	local v192;
	local v193;
	while true do
		if (v191 == (1899 - (30 + 1869))) then
			v192 = game.Players.LocalPlayer.Character;
			v193 = v192 and v192:FindFirstChild("HumanoidRootPart");
			v191 = 1370 - (213 + 1156);
